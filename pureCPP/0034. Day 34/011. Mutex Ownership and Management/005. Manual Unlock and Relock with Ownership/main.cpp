#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void manualUnlockAndRelock() {
    std::unique_lock<std::mutex> ul(mtx); // Own the lock
    std::cout << "Mutex locked initially.\n";

    ul.unlock(); // Temporarily release the lock
    std::cout << "Mutex unlocked temporarily.\n";

    ul.lock(); // Relock when needed
    std::cout << "Mutex relocked.\n";
}

int main() {
    manualUnlockAndRelock();
    return 0;
}
