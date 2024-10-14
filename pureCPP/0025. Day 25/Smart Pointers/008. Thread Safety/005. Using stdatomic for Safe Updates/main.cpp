#include <iostream>
#include <memory>
#include <atomic>
#include <thread>

void worker(std::shared_ptr<std::atomic<int>> sharedAtomicPtr) {
    sharedAtomicPtr->fetch_add(1);  // Atomically increment the value
    std::cout << "Value after increment: " << sharedAtomicPtr->load() << std::endl;
}

int main() {
    auto sharedAtomicPtr = std::make_shared<std::atomic<int>>(0);

    std::thread t1(worker, sharedAtomicPtr);
    std::thread t2(worker, sharedAtomicPtr);

    t1.join();
    t2.join();

    std::cout << "Final value: " << sharedAtomicPtr->load() << std::endl;

    return 0;
}
