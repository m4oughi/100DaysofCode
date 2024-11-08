#include <iostream>
#include <thread>

int sharedValue = 0;

void increment() {
    for (int i = 0; i < 10000; ++i) {
        ++sharedValue;  // Race condition
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final sharedValue: " << sharedValue << std::endl;
    return 0;
}
