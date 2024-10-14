#include <iostream>
#include <memory>
#include <thread>

void worker(std::shared_ptr<int> ptr) {
    std::cout << "Thread working with value: " << *ptr << std::endl;
}

int main() {
    auto sharedPtr = std::make_shared<int>(100);

    std::thread t1(worker, sharedPtr);
    std::thread t2(worker, sharedPtr);

    t1.join();
    t2.join();

    return 0;
}
