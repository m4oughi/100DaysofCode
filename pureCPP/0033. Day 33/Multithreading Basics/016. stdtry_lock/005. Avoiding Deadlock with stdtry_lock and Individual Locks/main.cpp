#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void threadFunction(int id) {
    if (mtx1.try_lock()) {  // Try to lock mtx1 first
        std::cout << "Thread " << id << " locked mtx1" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));  // Simulate work
        if (mtx2.try_lock()) {  // Try to lock mtx2
            std::cout << "Thread " << id << " locked mtx2" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
            mtx2.unlock();
        } else {
            std::cout << "Thread " << id << " could not lock mtx2, releasing mtx1" << std::endl;
        }
        mtx1.unlock();
    } else {
        std::cout << "Thread " << id << " could not lock mtx1" << std::endl;
    }
}

int main() {
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);

    t1.join();
    t2.join();

    return 0;
}
