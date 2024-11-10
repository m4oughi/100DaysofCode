#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void backoffRetryTask(int id) {
    int attempts = 0;
    int backoffTime = 50; // Start with 50 ms backoff

    while (attempts < 5) { // Max 5 attempts
        if (tmtx.try_lock_for(std::chrono::milliseconds(backoffTime))) {
            std::cout << "Thread " << id << " acquired lock after " << attempts + 1 << " attempts\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Task time
            tmtx.unlock();
            return;
        } else {
            std::cout << "Thread " << id << " failed to acquire lock on attempt " << attempts + 1 << "\n";
            ++attempts;
            backoffTime *= 2; // Increase backoff time
        }
    }
    std::cout << "Thread " << id << " gave up after multiple attempts\n";
}

int main() {
    std::thread t1(backoffRetryTask, 1);
    std::thread t2(backoffRetryTask, 2);

    t1.join();
    t2.join();
    return 0;
}
