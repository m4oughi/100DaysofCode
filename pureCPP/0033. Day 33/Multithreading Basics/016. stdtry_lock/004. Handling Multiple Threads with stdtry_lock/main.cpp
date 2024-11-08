#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtxA, mtxB, mtxC;

void tryLockAll(int id) {
    int result = std::try_lock(mtxA, mtxB, mtxC);  // Try to lock all three mutexes
    if (result == -1) {
        std::cout << "Thread " << id << " locked all mutexes." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        mtxA.unlock();
        mtxB.unlock();
        mtxC.unlock();
    } else {
        std::cout << "Thread " << id << " could not lock mutex at index: " << result << std::endl;
    }
}

int main() {
    std::thread t1(tryLockAll, 1);
    std::thread t2(tryLockAll, 2);
    std::thread t3(tryLockAll, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
