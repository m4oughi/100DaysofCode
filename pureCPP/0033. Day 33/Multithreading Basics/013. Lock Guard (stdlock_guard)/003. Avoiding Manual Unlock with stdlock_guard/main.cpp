#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void safePrint(int id) {
    {
        std::lock_guard<std::mutex> lock(mtx);  // Mutex automatically unlocks when scope ends
        std::cout << "Thread " << id << " is working..." << std::endl;
    }
    // Mutex is unlocked here
    std::cout << "Thread " << id << " is outside the critical section." << std::endl;
}

int main() {
    std::thread t1(safePrint, 1);
    std::thread t2(safePrint, 2);

    t1.join();
    t2.join();

    return 0;
}
