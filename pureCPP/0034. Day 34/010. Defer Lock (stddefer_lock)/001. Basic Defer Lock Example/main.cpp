#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void basicDeferLock() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking
    std::cout << "Lock is deferred; not locked initially.\n";

    // Manually lock when needed
    ul.lock();
    std::cout << "Mutex is now locked.\n";
}

int main() {
    basicDeferLock();
    return 0;
}
