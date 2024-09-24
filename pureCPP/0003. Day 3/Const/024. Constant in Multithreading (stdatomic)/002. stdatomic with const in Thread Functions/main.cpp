#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> globalAtomicValue(20);

void threadFunction() {
    std::cout << "Atomic value in thread: " << globalAtomicValue.load() << std::endl;
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    t1.join();
    t2.join();

    return 0;
}
