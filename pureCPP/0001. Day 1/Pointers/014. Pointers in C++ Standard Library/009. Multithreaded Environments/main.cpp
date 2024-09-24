#include <iostream>
#include <memory>
#include <thread>

void increment(std::shared_ptr<int> ptr) {
    for (int i = 0; i < 1000; ++i) {
        (*ptr)++;
    }
}

int main() {
    std::shared_ptr<int> counter = std::make_shared<int>(0);

    std::thread t1(increment, counter);
    std::thread t2(increment, counter);

    t1.join();
    t2.join();

    std::cout << "Final counter value: " << *counter << std::endl;  // Output: Final counter value: 2000
    return 0;
}
