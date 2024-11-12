#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void safeMultiLockTask(int id) {
    if (std::try_lock(mtx1, mtx2) == -1) { // Attempts to lock both mutexes
        std::cout << "Thread " << id << " acquired both locks.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
        mtx1.unlock();
        mtx2.unlock();
    } else {
        std::cout << "Thread " << id << " could not acquire both locks.\n";
    }
}

int main() {
    std::thread t1(safeMultiLockTask, 1);
    std::thread t2(safeMultiLockTask, 2);

    t1.join();
    t2.join();

    return 0;
}
