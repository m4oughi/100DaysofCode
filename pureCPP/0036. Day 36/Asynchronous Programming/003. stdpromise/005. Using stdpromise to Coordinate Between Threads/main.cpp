#include <iostream>
#include <future>
#include <thread>

void worker1(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    prom.set_value(100);  // Set a value to be passed to the main thread
}

void worker2(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    prom.set_value(200);  // This will override the previous promise value
}

int main() {
    std::promise<int> prom1, prom2;
    std::future<int> result1 = prom1.get_future();
    std::future<int> result2 = prom2.get_future();

    std::thread t1(worker1, std::ref(prom1));  // Worker 1 will set the first value
    std::thread t2(worker2, std::ref(prom2));  // Worker 2 will set the second value

    // Get the result from the second promise (it will override the first one)
    std::cout << "Result from worker2: " << result2.get() << std::endl;

    t1.join();  // Wait for worker 1
    t2.join();  // Wait for worker 2
    return 0;
}
