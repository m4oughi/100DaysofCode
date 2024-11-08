#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex r_mtx;

void recursiveFunction(int count) {
    if (count <= 0) return;
    
    r_mtx.lock();
    std::cout << "Lock acquired, count: " << count << std::endl;
    recursiveFunction(count - 1);
    r_mtx.unlock();
    std::cout << "Lock released, count: " << count << std::endl;
}

int main() {
    std::thread t1(recursiveFunction, 3);
    t1.join();

    return 0;
}
