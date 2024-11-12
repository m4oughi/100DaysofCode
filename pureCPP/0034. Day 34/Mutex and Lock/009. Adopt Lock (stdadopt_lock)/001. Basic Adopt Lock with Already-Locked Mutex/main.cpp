#include <iostream>
#include <mutex>

std::mutex mtx;

void basicAdoptLock() {
    mtx.lock(); // Manually lock the mutex
    std::lock_guard<std::mutex> lg(mtx, std::adopt_lock); // Adopt the lock without re-locking
    std::cout << "Mutex adopted and locked using std::adopt_lock.\n";
    // No need to unlock manually; lock_guard will handle it when it goes out of scope
}

int main() {
    basicAdoptLock();
    return 0;
}
