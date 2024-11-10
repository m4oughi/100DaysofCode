#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx1, mtx2;

void safeDualLockTask(int id) {
    if (std::try_lock(mtx1, mtx2) == -1) { // Lock both mutexes without blocking
        std::lock_guard<std::mutex> lg1(mtx1, std::adopt_lock); // Adopt mtx1 lock
        std::lock_guard<std::mutex> lg2(mtx2, std::adopt_lock); // Adopt mtx2 lock

        std::cout << "Thread " << id << " acquired both locks and is working.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    } else {
        std::cout << "Thread " << id << " could not acquire both locks.\n";
    }
}

int main() {
    std::thread t1(safeDualLockTask, 1);
    std::thread t2(safeDualLockTask, 2);

    t1.join();
    t2.join();

    return 0;
}
