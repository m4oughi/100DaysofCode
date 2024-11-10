#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void periodicResourceAccess(int id) {
    auto deadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(100);
    if (tmtx.try_lock_until(deadline)) { // Try to lock until the deadline
        std::cout << "Thread " << id << " acquired lock before deadline\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        tmtx.unlock();
    } else {
        std::cout << "Thread " << id << " failed to acquire lock before deadline\n";
    }
}

int main() {
    std::thread t1(periodicResourceAccess, 1);
    std::thread t2(periodicResourceAccess, 2);

    t1.join();
    t2.join();
    return 0;
}
