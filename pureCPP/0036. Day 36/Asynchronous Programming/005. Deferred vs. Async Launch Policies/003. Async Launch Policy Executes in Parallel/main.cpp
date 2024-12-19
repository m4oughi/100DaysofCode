#include <iostream>
#include <future>
#include <thread>

void printCount() {
    for (int i = 0; i < 5; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));  // Simulate work
        std::cout << "Counting: " << i << std::endl;
    }
}

int main() {
    // Async task runs in a new thread
    std::future<void> asyncResult = std::async(std::launch::async, printCount);

    std::cout << "Main thread working while async task runs...\n";
    asyncResult.get();  // Wait for async task to finish

    return 0;
}
