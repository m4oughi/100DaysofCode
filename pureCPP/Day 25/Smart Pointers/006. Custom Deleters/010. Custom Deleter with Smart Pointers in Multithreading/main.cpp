#include <iostream>
#include <memory>
#include <thread>

void threadSafeDeleter(int* ptr) {
    std::cout << "Thread-safe custom deleter called. Deleting memory in thread..." << std::endl;
    delete ptr;
}

void threadFunc(std::shared_ptr<int> ptr) {
    std::cout << "Thread: " << std::this_thread::get_id() << " using value: " << *ptr << std::endl;
}

int main() {
    std::shared_ptr<int> sharedPtr(new int(42), threadSafeDeleter);  // Custom deleter for thread-safe cleanup

    std::thread t1(threadFunc, sharedPtr);
    std::thread t2(threadFunc, sharedPtr);

    t1.join();
    t2.join();

    // Memory will be safely deallocated using the custom deleter when sharedPtr goes out of scope
    return 0;
}
