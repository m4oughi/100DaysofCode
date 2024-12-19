#include <iostream>
#include <future>
#include <thread>

void task(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
    prom.set_value(42);  // Set the result in the promise
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();  // Get the future associated with the promise

    // Launch a thread to perform a task
    std::thread t(task, std::ref(prom));

    // Wait for the result from the future before continuing
    int result = fut.get();
    std::cout << "Result from async task: " << result << std::endl;  // Output: 42

    t.join();
    return 0;
}
