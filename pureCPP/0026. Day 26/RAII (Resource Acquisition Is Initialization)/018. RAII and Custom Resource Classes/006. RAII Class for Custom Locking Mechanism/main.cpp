#include <iostream>

class CustomLock {
    bool locked;
public:
    CustomLock() {
        // Simulate acquiring a lock
        locked = true;
        std::cout << "Lock acquired." << std::endl;
    }

    ~CustomLock() {
        if (locked) {
            // Simulate releasing the lock
            std::cout << "Lock released." << std::endl;
        }
    }
};

void performCriticalSection() {
    CustomLock lock;
    std::cout << "Performing critical section operation." << std::endl;
}

int main() {
    performCriticalSection();
    // Lock is automatically released when lock object goes out of scope
    return 0;
}
