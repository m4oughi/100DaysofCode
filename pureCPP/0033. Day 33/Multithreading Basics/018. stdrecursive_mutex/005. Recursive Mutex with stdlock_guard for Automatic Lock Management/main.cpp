#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex r_mtx;

void autoLockFunction(int count) {
    if (count <= 0) return;

    std::lock_guard<std::recursive_mutex> lock(r_mtx);
    std::cout << "Lock automatically acquired at count " << count << std::endl;

    autoLockFunction(count - 1);  // Recursive call with lock still active

    std::cout << "Automatic lock released at count " << count << std::endl;
}

int main() {
    std::thread t1(autoLockFunction, 3);
    t1.join();

    return 0;
}
