#include <iostream>
#include <future>
#include <thread>

void printMessage(const std::string& msg) {
    std::cout << msg << std::endl;
}

int main() {
    // Using std::launch::deferred (task runs synchronously in the calling thread)
    std::future<void> deferredResult = std::async(std::launch::deferred, printMessage, "Deferred Task");

    // Using std::launch::async (task runs asynchronously in a separate thread)
    std::future<void> asyncResult = std::async(std::launch::async, printMessage, "Async Task");

    // Wait for both tasks to complete
    deferredResult.get();  // Deferred task runs here
    asyncResult.get();     // Async task runs in a separate thread

    return 0;
}
