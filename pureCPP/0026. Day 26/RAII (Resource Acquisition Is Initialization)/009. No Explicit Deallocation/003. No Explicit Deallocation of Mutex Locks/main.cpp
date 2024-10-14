#include <iostream>
#include <mutex>

class LockRAII {
    std::mutex& mtx;

public:
    LockRAII(std::mutex& m) : mtx(m) {
        mtx.lock();
        std::cout << "Mutex locked." << std::endl;
    }

    ~LockRAII() {
        mtx.unlock();
        std::cout << "Mutex unlocked automatically." << std::endl;
    }
};

int main() {
    std::mutex mtx;
    {
        LockRAII lock(mtx);
        std::cout << "Critical section." << std::endl;
    }  // Mutex is automatically unlocked when `LockRAII` goes out of scope.
}
