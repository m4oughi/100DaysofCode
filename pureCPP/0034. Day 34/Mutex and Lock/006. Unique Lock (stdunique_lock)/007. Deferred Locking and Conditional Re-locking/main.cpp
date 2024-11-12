#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
bool conditionMet = false;

void taskWithCondition() {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock); // Deferred locking

    if (conditionMet) {
        lock.lock(); // Only lock if the condition is met
        std::cout << "Condition met, lock acquired.\n";
    } else {
        std::cout << "Condition not met, no lock acquired.\n";
    }
}

int main() {
    conditionMet = true; // Simulate a condition change
    std::thread t1(taskWithCondition);
    t1.join();
    return 0;
}
