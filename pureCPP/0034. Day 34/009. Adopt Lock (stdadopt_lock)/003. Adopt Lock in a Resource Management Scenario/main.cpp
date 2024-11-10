#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;
int sharedResource = 0;

void updateResource() {
    if (mtx.try_lock()) { // Try to lock the mutex
        std::lock_guard<std::mutex> lg(mtx, std::adopt_lock); // Adopt the lock
        ++sharedResource;
        std::cout << "Shared resource updated to " << sharedResource << "\n";
        // Mutex automatically unlocked when lg goes out of scope
    } else {
        std::cout << "Unable to acquire lock.\n";
    }
}

int main() {
    std::thread t1(updateResource);
    std::thread t2(updateResource);

    t1.join();
    t2.join();

    return 0;
}
