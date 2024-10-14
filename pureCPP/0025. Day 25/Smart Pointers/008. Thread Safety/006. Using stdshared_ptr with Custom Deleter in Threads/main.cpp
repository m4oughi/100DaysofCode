#include <iostream>
#include <memory>
#include <thread>

void customDeleter(int* ptr) {
    std::cout << "Custom deleter called, deleting resource" << std::endl;
    delete ptr;
}

void worker(std::shared_ptr<int> sharedPtr) {
    std::cout << "Thread received value: " << *sharedPtr << std::endl;
}

int main() {
    auto sharedPtr = std::shared_ptr<int>(new int(42), customDeleter);

    std::thread t1(worker, sharedPtr);
    std::thread t2(worker, sharedPtr);

    t1.join();
    t2.join();

    return 0;
}
