#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx1, mtx2;

void threadA() {
    if (mtx1.try_lock_for(std::chrono::milliseconds(100))) {
        std::cout << "Thread A acquired mtx1\n";
        
        if (mtx2.try_lock_for(std::chrono::milliseconds(100))) {
            std::cout << "Thread A acquired mtx2\n";
            mtx2.unlock();
        } else {
            std::cout << "Thread A failed to acquire mtx2\n";
        }
        
        mtx1.unlock();
    } else {
        std::cout << "Thread A failed to acquire mtx1\n";
    }
}

void threadB() {
    if (mtx2.try_lock_for(std::chrono::milliseconds(100))) {
        std::cout << "Thread B acquired mtx2\n";
        
        if (mtx1.try_lock_for(std::chrono::milliseconds(100))) {
            std::cout << "Thread B acquired mtx1\n";
            mtx1.unlock();
        } else {
            std::cout << "Thread B failed to acquire mtx1\n";
        }
        
        mtx2.unlock();
    } else {
        std::cout << "Thread B failed to acquire mtx2\n";
    }
}

int main() {
    std::thread t1(threadA);
    std::thread t2(threadB);

    t1.join();
    t2.join();
    return 0;
}
