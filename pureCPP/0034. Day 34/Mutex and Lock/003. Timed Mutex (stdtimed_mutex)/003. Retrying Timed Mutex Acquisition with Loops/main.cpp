#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void retryLockExample(int id) {
    int attempts = 3;
    while (attempts > 0) {
        if (tmtx.try_lock_for(std::chrono::milliseconds(50))) { // Try to lock for 50 ms
            std::cout << "Thread " << id << " acquired lock after retrying\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            tmtx.unlock();
            return;
        } else {
            std::cout << "Thread " << id << " could not acquire lock, retries left: " << --attempts << "\n";
        }
    }
    std::cout << "Thread " << id << " failed to acquire lock after multiple attempts\n";
}

int main() {
    std::thread t1(retryLockExample, 1);
    std::thread t2(retryLockExample, 2);

    t1.join();
    t2.join();
    return 0;
}
