#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 0;

void incrementCounter() {
    std::scoped_lock lock(mtx); // Ensures counter access is thread-safe
    ++counter;
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    std::cout << "Final Counter Value: " << counter << "\n";
    return 0;
}
