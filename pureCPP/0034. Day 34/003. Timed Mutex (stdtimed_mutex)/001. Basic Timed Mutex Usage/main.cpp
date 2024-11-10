#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void tryLockExample(int id) {
    if (tmtx.try_lock_for(std::chrono::milliseconds(100))) { // Try to lock for 100 ms
        std::cout << "Thread " << id << " acquired lock\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(150)); // Simulate work
        tmtx.unlock();
    } else {
        std::cout << "Thread " << id << " could not acquire lock within 100 ms\n";
    }
}

int main() {
    std::thread t1(tryLockExample, 1);
    std::thread t2(tryLockExample, 2);

    t1.join();
    t2.join();
    return 0;
}
