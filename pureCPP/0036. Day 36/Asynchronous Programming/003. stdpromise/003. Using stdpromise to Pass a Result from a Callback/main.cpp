#include <iostream>
#include <future>
#include <thread>

void asyncOperation(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate some work
    prom.set_value(42);  // Set the result in the promise
}

int main() {
    std::promise<int> prom;
    std::future<int> result = prom.get_future();  // Get the associated future

    std::thread t(asyncOperation, std::ref(prom));  // Start the async operation in a new thread
    std::cout << "Waiting for result..." << std::endl;
    std::cout << "Result from promise: " << result.get() << std::endl;  // Wait for the result from the promise

    t.join();  // Wait for the thread to finish
    return 0;
}
