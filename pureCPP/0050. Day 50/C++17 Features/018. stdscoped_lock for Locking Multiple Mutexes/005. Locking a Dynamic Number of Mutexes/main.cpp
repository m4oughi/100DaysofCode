#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex m1, m2, m3;

void safeFunction() {
    std::scoped_lock lock(m1, m2, m3);
    std::cout << "Thread safely acquired multiple mutexes!\n";
}

int main() {
    std::thread t1(safeFunction);
    std::thread t2(safeFunction);

    t1.join();
    t2.join();

    return 0;
}
