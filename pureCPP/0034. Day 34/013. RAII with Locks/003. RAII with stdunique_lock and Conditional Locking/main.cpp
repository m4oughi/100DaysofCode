#include <iostream>
#include <mutex>

std::mutex mtx;

void conditionalLock(bool shouldLock) {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock);
    if (shouldLock) {
        lock.lock();
        std::cout << "Conditional lock acquired\n";
    } else {
        std::cout << "Lock not required\n";
    }
    // Lock is automatically released if it was acquired
}

int main() {
    conditionalLock(true);
    conditionalLock(false);
    return 0;
}
