#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
bool condition = false;

void conditionalDeferLock() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    if (condition) {
        ul.lock(); // Lock only if the condition is true
        std::cout << "Condition met, mutex locked.\n";
    } else {
        std::cout << "Condition not met, no lock acquired.\n";
    }
}

int main() {
    conditionalDeferLock();
    return 0;
}
