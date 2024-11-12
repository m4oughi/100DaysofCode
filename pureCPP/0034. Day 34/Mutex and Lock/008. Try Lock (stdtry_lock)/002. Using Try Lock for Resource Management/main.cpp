#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 0;

void incrementIfPossible() {
    if (mtx.try_lock()) {
        ++counter;
        std::cout << "Counter incremented, current value: " << counter << "\n";
        mtx.unlock();
    } else {
        std::cout << "Lock unavailable, skipping increment.\n";
    }
}

int main() {
    std::thread t1(incrementIfPossible);
    std::thread t2(incrementIfPossible);

    t1.join();
    t2.join();

    return 0;
}
