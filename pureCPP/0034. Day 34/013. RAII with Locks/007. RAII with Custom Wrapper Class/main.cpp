#include <iostream>
#include <mutex>

class RAII_Mutex {
    std::mutex& mtx;

public:
    RAII_Mutex(std::mutex& m) : mtx(m) {
        mtx.lock(); // Lock on construction
        std::cout << "Custom RAII lock acquired\n";
    }

    ~RAII_Mutex() {
        mtx.unlock(); // Unlock on destruction
        std::cout << "Custom RAII lock released\n";
    }
};

std::mutex mtx;

void customRAIIFunction() {
    RAII_Mutex lock(mtx); // Custom RAII lock
    // Critical section
}

int main() {
    customRAIIFunction();
    return 0;
}
