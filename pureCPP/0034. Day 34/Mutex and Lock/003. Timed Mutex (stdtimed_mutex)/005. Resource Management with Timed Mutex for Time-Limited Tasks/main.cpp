#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void timeLimitedTask(int id) {
    if (tmtx.try_lock_for(std::chrono::milliseconds(120))) { // Lock for 120 ms
        std::cout << "Thread " << id << " acquired lock and started task\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Task time
        std::cout << "Thread " << id << " completed task\n";
        tmtx.unlock();
    } else {
        std::cout << "Thread " << id << " could not start task due to timeout\n";
    }
}

int main() {
    std::thread t1(timeLimitedTask, 1);
    std::thread t2(timeLimitedTask, 2);
    std::thread t3(timeLimitedTask, 3);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}
