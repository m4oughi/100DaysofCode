#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int data = 0;

void processData(bool shouldLock) {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock); // Deferred lock
    if (shouldLock) {
        lock.lock(); // Lock only if needed
        data += 10;
    }
    std::cout << "Data processed: " << data << "\n";
}

int main() {
    std::thread t1(processData, true);
    std::thread t2(processData, false);

    t1.join();
    t2.join();

    return 0;
}
