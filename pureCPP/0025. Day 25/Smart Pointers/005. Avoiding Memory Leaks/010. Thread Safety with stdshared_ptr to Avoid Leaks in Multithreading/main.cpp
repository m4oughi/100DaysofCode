#include <iostream>
#include <memory>
#include <thread>

void threadFunc(std::shared_ptr<int> ptr) {
    std::cout << "Thread Value: " << *ptr << std::endl;
}

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(100);

    std::thread t1(threadFunc, sharedPtr);  // Shared ownership across threads
    std::thread t2(threadFunc, sharedPtr);

    t1.join();
    t2.join();

    // Memory is deallocated automatically when all threads and shared_ptrs are done
    return 0;
}
