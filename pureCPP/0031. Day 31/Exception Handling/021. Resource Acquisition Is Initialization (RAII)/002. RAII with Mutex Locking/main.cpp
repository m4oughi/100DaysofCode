#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

class LockHandler {
public:
    LockHandler() {
        mtx.lock();
        std::cout << "Mutex locked." << std::endl;
    }

    ~LockHandler() {
        mtx.unlock();
        std::cout << "Mutex unlocked in destructor." << std::endl;
    }
};

void criticalSection() {
    LockHandler lock;  // Locks mutex
    std::cout << "Inside critical section" << std::endl;
    // Mutex will be unlocked automatically when 'lock' goes out of scope
}

int main() {
    std::thread t1(criticalSection);
    std::thread t2(criticalSection);

    t1.join();
    t2.join();
    return 0;
}
