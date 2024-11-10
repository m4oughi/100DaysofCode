#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;
int sharedCounter = 0;

void incrementCounter(int id) {
    if (tmtx.try_lock_for(std::chrono::milliseconds(100))) {
        std::cout << "Thread " << id << " is updating the counter\n";
        for (int i = 0; i < 5; ++i) {
            ++sharedCounter;
            std::this_thread::sleep_for(std::chrono::milliseconds(20)); // Simulate work
        }
        std::cout << "Thread " << id << " finished updating the counter\n";
        tmtx.unlock();
    } else {
        std::cout << "Thread " << id << " could not lock within 100 ms\n";
    }
}

int main() {
    std::thread t1(incrementCounter, 1);
    std::thread t2(incrementCounter, 2);

    t1.join();
    t2.join();
    std::cout << "Final Counter Value: " << sharedCounter << "\n";
    return 0;
}
