#include <iostream>
#include <memory>
#include <thread>

void observe(std::weak_ptr<int> weakPtr) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate some work
    if (auto shared = weakPtr.lock()) {
        std::cout << "Thread: Weak pointer is valid, value: " << *shared << std::endl;
    } else {
        std::cout << "Thread: Weak pointer is expired" << std::endl;
    }
}

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(100);
    std::weak_ptr<int> weakPtr = sharedPtr;

    std::thread t(observe, weakPtr);  // Start a thread that checks the weak pointer

    std::this_thread::sleep_for(std::chrono::milliseconds(500));  // Let thread start working
    sharedPtr.reset();  // Reset the shared pointer, causing weakPtr to expire

    t.join();  // Wait for the thread to finish

    return 0;
}
