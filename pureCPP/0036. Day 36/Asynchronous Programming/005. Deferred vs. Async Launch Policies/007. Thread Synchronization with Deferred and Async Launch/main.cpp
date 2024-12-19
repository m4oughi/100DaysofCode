#include <iostream>
#include <future>
#include <thread>

void performTask(const std::string& name) {
    std::cout << name << " started...\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate task
    std::cout << name << " completed.\n";
}

int main() {
    // Async task (runs in parallel)
    std::future<void> asyncTask = std::async(std::launch::async, performTask, "Async Task");

    // Deferred task (runs in the main thread)
    std::future<void> deferredTask = std::async(std::launch::deferred, performTask, "Deferred Task");

    // Wait for async task to finish
    asyncTask.get();

    // Wait for deferred task to finish (runs only after this point)
    deferredTask.get();

    return 0;
}
