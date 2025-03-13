#include <iostream>
#include <shared_mutex>
#include <thread>
#include <chrono>

std::shared_timed_mutex mtx;

void writer() {
    std::unique_lock<std::shared_timed_mutex> lock(mtx);
    std::cout << "Writer is writing...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Writer finished writing.\n";
}

void reader() {
    if (mtx.try_lock_shared_for(std::chrono::seconds(1))) {
        std::cout << "Reader acquired lock.\n";
        mtx.unlock_shared();
    } else {
        std::cout << "Reader timeout while waiting for lock.\n";
    }
}

int main() {
    std::thread w(writer);
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Ensure writer starts first
    std::thread r(reader);

    w.join();
    r.join();

    return 0;
}
