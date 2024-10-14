#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void task(int id) {
    if (tmtx.try_lock_for(std::chrono::milliseconds(500))) {
        std::lock_guard<std::timed_mutex> lock(tmtx, std::adopt_lock); // Adopt the lock
        std::cout << "Thread " << id << " acquired the lock." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulate work
    } else {
        std::cout << "Thread " << id << " timed out trying to lock the mutex." << std::endl;
    }
    // Mutex is automatically released when lock goes out of scope
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);

    t1.join();
    t2.join();

    std::cout << "Timed mutex automatically managed using RAII." << std::endl;
    return 0;
}
