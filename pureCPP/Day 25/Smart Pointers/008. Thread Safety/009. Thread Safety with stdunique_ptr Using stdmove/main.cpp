#include <iostream>
#include <memory>
#include <thread>

void worker(std::unique_ptr<int> uniquePtr) {
    std::cout << "Thread working with value: " << *uniquePtr << std::endl;
}

int main() {
    auto uniquePtr = std::make_unique<int>(42);

    // Transfer ownership to thread using std::move
    std::thread t1(worker, std::move(uniquePtr));

    t1.join();

    // uniquePtr is now null, as ownership was transferred
    if (!uniquePtr) {
        std::cout << "uniquePtr is null after transfer" << std::endl;
    }

    return 0;
}
