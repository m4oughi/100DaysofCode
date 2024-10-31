#include <iostream>
#include <mutex>
#include <stdexcept>

std::mutex mtx;

void criticalSection() {
    std::lock_guard<std::mutex> lock(mtx);  // RAII handles mutex lock/unlock
    std::cout << "Inside critical section" << std::endl;
    throw std::runtime_error("Error occurred in critical section!");
}

int main() {
    try {
        criticalSection();  // The mutex is automatically unlocked
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
