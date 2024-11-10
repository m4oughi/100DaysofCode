#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int sharedData = 0;

void modifyData(bool shouldLock) {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock); // Deferred lock
    if (shouldLock) {
        lock.lock(); // Lock only if needed
        ++sharedData;
    }
    std::cout << "Shared data: " << sharedData << "\n";
}

int main() {
    std::thread t1(modifyData, true);
    std::thread t2(modifyData, false);

    t1.join();
    t2.join();

    return 0;
}
