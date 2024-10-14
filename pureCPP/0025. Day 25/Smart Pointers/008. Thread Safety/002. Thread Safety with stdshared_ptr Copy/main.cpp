#include <iostream>
#include <memory>
#include <thread>

void worker(std::shared_ptr<int> ptr) {
    std::cout << "Thread received: " << *ptr << std::endl;
}

int main() {
    auto sharedPtr = std::make_shared<int>(100);

    std::thread t1(worker, sharedPtr);  // Copying shared_ptr to the thread
    std::thread t2(worker, sharedPtr);  // Copying again to another thread

    t1.join();
    t2.join();

    std::cout << "Final value in main thread: " << *sharedPtr << std::endl;

    return 0;
}
