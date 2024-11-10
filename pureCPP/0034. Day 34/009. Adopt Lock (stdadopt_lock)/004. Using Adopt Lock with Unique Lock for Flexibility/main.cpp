#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;

void flexibleAdoptLockTask() {
    mtx.lock(); // Manually lock the mutex
    std::unique_lock<std::mutex> ul(mtx, std::adopt_lock); // Adopt the lock
    std::cout << "Mutex adopted by unique_lock.\n";

    // Perform some task
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    ul.unlock(); // Explicitly unlock before end of scope
    std::cout << "Mutex unlocked by unique_lock.\n";
}

int main() {
    std::thread t1(flexibleAdoptLockTask);
    std::thread t2(flexibleAdoptLockTask);

    t1.join();
    t2.join();

    return 0;
}
