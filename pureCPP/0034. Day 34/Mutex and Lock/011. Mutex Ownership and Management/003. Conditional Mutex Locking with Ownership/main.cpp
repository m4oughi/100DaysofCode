#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
bool condition = true;

void conditionalOwnership() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    if (condition) {
        ul.lock(); // Acquire lock conditionally
        std::cout << "Condition met, mutex locked and owned.\n";
    } else {
        std::cout << "Condition not met, no ownership of mutex.\n";
    }
}

int main() {
    conditionalOwnership();
    return 0;
}
