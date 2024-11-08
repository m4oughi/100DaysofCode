#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex r_mtx;

void multipleLocks(int level) {
    if (level == 0) return;

    r_mtx.lock();
    std::cout << "Lock acquired at level: " << level << std::endl;

    multipleLocks(level - 1);

    std::cout << "Releasing lock at level: " << level << std::endl;
    r_mtx.unlock();
}

int main() {
    std::thread t1(multipleLocks, 3);
    t1.join();

    return 0;
}
