#include <iostream>
#include <future>
#include <thread>

void worker(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
    prom.set_value(100);  // Set shared result (100)
}

int main() {
    std::promise<int> prom;  // Single promise for shared data
    std::future<int> fut = prom.get_future();  // Future to get the data

    // Launch multiple threads that will share the same promise and future
    std::thread t1(worker, std::ref(prom));
    std::thread t2(worker, std::ref(prom));

    // Wait for the result from the shared future
    std::cout << "Shared result: " << fut.get() << std::endl;  // Output: 100

    t1.join();
    t2.join();

    return 0;
}
