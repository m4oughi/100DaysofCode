#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void conditionalLocking() {
    for (int i = 0; i < 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx, std::defer_lock);
        if (i % 2 == 0) {
            lock.lock();  // Lock only if condition is met
            std::cout << "Locked on iteration " << i << std::endl;
        } else {
            std::cout << "Skipped locking on iteration " << i << std::endl;
        }
    }
}

int main() {
    std::thread t(conditionalLocking);

    t.join();

    return 0;
}
