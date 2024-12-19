#include <iostream>
#include <future>
#include <thread>

void longRunningTask(const std::string& taskName) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate long task
    std::cout << taskName << " completed.\n";
}

int main() {
    // Async task will execute in a separate thread
    std::future<void> asyncResult = std::async(std::launch::async, longRunningTask, "Async Task");

    // Deferred task will execute only when get() is called
    std::future<void> deferredResult = std::async(std::launch::deferred, longRunningTask, "Deferred Task");

    // Main thread continues working while async task is running in parallel
    std::cout << "Main thread is free while async task runs...\n";

    // Wait for the async task to complete
    asyncResult.get();

    // Now, the deferred task is executed when we call get()
    deferredResult.get();

    return 0;
}
