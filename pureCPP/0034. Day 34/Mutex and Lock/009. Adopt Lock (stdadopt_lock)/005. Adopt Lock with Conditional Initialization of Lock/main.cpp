#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
bool conditionMet = false;

void conditionalAdoptLockTask() {
    if (!conditionMet) {
        mtx.lock(); // Manually lock based on a condition
        conditionMet = true;
    }

    std::lock_guard<std::mutex> lg(mtx, std::adopt_lock); // Adopt the lock
    std::cout << "Condition met, mutex adopted.\n";
}

int main() {
    std::thread t1(conditionalAdoptLockTask);
    std::thread t2(conditionalAdoptLockTask);

    t1.join();
    t2.join();

    return 0;
}
