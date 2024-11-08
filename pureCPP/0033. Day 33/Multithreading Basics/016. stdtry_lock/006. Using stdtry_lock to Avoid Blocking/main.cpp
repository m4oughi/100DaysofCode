#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void threadFunction(int id) {
    if (std::try_lock(mtx1, mtx2) == -1) {  // Try locking both mutexes
        std::cout << "Thread " << id << " successfully locked both mtx1 and mtx2" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        mtx1.unlock();
        mtx2.unlock();
    } else {
        std::cout << "Thread " << id << " could not lock both mutexes, proceeding with alternative task" << std::endl;
        // Alternative work when the locks are not available
    }
}

int main() {
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);

    t1.join();
    t2.join();

    return 0;
}
