#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void tryLockTask(int id) {
    if (mtx.try_lock()) {
        std::cout << "Thread " << id << " acquired the lock.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        mtx.unlock();
    } else {
        std::cout << "Thread " << id << " couldn't acquire the lock.\n";
    }
}

int main() {
    std::thread t1(tryLockTask, 1);
    std::thread t2(tryLockTask, 2);

    t1.join();
    t2.join();

    return 0;
}
