#include <iostream>
#include <mutex>
#include <thread>

class MutexRAII {
    std::mutex& mtx;

public:
    MutexRAII(std::mutex& m) : mtx(m) {
        mtx.lock();
        std::cout << "Mutex locked." << std::endl;
    }

    // Destructor releases the mutex lock automatically.
    ~MutexRAII() {
        mtx.unlock();
        std::cout << "Mutex unlocked in destructor." << std::endl;
    }
};

void critical_section(std::mutex& mtx) {
    MutexRAII lock(mtx);
    std::cout << "In critical section." << std::endl;
}

int main() {
    std::mutex mtx;
    std::thread t1(critical_section, std::ref(mtx));
    std::thread t2(critical_section, std::ref(mtx));

    t1.join();
    t2.join();
}
