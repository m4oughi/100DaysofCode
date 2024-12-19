#include <iostream>
#include <future>
#include <thread>

void worker(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
    prom.set_value(42);  // Send the result (42) to the main thread
}

int main() {
    std::promise<int> prom;  // Create a promise
    std::future<int> fut = prom.get_future();  // Get the associated future

    // Launch the worker thread to perform the task
    std::thread t(worker, std::ref(prom));

    // Wait for the result from the future
    std::cout << "Result from worker thread: " << fut.get() << std::endl;  // Output: 42

    t.join();  // Wait for the worker thread to finish
    return 0;
}
