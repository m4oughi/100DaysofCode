#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void basicMutexOwnership() {
    std::unique_lock<std::mutex> ul(mtx); // Lock and own the mutex
    std::cout << "Mutex is locked and owned by this thread.\n";
} // Mutex automatically unlocked here

int main() {
    basicMutexOwnership();
    return 0;
}
