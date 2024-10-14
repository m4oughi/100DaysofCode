#include <iostream>
#include <memory>
#include <thread>
#include <chrono>

void worker(std::weak_ptr<int> weakPtr) {
    // Try to lock the weak_ptr to access the shared data
    if (auto sharedPtr = weakPtr.lock()) {
        std::cout << "Thread accessing: " << *sharedPtr << std::endl;
    } else {
        std::cout << "Resource no longer available" << std::endl;
    }
}

int main() {
    auto sharedPtr = std::make_shared<int>(10);
    std::weak_ptr<int> weakPtr(sharedPtr);  // Create weak_ptr to sharedPtr

    std::thread t1(worker, weakPtr);

    // Simulate some work, then reset sharedPtr, making the resource unavailable
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    sharedPtr.reset();

    t1.join();
    return 0;
}
