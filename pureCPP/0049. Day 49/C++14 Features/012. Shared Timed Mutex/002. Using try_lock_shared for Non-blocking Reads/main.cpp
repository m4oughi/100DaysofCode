#include <iostream>
#include <shared_mutex>
#include <thread>
#include <chrono>

std::shared_timed_mutex mtx;

void try_read(int id) {
    if (mtx.try_lock_shared()) {
        std::cout << "Reader " << id << " acquired lock.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        mtx.unlock_shared();
    } else {
        std::cout << "Reader " << id << " failed to acquire lock.\n";
    }
}

int main() {
    std::thread r1(try_read, 1);
    std::thread r2(try_read, 2);

    r1.join();
    r2.join();

    return 0;
}
