#include <iostream>
#include <memory>
#include <thread>

void threadFunction(std::shared_ptr<int> ptr) {
    std::cout << "Value in thread: " << *ptr << std::endl;
}

int main() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(100);

    std::thread t1(threadFunction, sharedPtr);  // Shared ownership across threads
    std::thread t2(threadFunction, sharedPtr);

    t1.join();
    t2.join();

    // Shared pointer will automatically deallocate memory when all owners are done
    return 0;
}
