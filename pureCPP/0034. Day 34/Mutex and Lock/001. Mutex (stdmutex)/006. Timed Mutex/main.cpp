#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void timedLockExample(int id) {
    if (tmtx.try_lock_for(std::chrono::milliseconds(50))) { // Try to lock for 50 ms
        std::cout << "Thread " << id << " acquired lock\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        tmtx.unlock();
    } else {
        std::cout << "Thread " << id << " could not acquire lock within 50 ms\n";
    }
}

int main() {
    std::thread t1(timedLockExample, 1);
    std::thread t2(timedLockExample, 2);

    t1.join();
    t2.join();
    return 0;
}
