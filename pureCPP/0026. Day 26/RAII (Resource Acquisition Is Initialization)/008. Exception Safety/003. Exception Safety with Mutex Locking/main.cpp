#include <iostream>
#include <mutex>
#include <stdexcept>

class MutexRAII {
    std::mutex& mtx;

public:
    MutexRAII(std::mutex& m) : mtx(m) {
        mtx.lock();
        std::cout << "Mutex locked." << std::endl;
    }

    ~MutexRAII() {
        mtx.unlock();
        std::cout << "Mutex unlocked." << std::endl;
    }

    void simulateException() {
        throw std::runtime_error("Simulated exception during critical section.");
    }
};

int main() {
    std::mutex mtx;
    try {
        MutexRAII lock(mtx);
        lock.simulateException();  // Exception occurs, but mutex is released.
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Mutex is automatically unlocked after exception is caught.
}
