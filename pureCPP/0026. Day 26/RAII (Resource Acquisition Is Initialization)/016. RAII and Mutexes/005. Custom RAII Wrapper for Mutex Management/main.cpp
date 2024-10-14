#include <iostream>
#include <thread>
#include <mutex>

class MutexWrapper {
    std::mutex& mtx;
public:
    MutexWrapper(std::mutex& m) : mtx(m) {
        mtx.lock(); // Lock the mutex in constructor
        std::cout << "Mutex locked by thread " << std::this_thread::get_id() << "." << std::endl;
    }
    
    ~MutexWrapper() {
        mtx.unlock(); // Unlock the mutex in destructor
        std::cout << "Mutex unlocked by thread " << std::this_thread::get_id() << "." << std::endl;
    }
};

std::mutex mtx;

void task() {
    MutexWrapper lock(mtx); // Custom RAII wrapper for mutex
    std::cout << "Thread " << std::this_thread::get_id() << " is doing work." << std::endl;
    // Mutex is automatically unlocked when `lock` goes out of scope
}

int main() {
    std::thread t1(task);
    std::thread t2(task);

    t1.join();
    t2.join();

    std::cout << "Custom mutex management with RAII." << std::endl;
    return 0;
}
