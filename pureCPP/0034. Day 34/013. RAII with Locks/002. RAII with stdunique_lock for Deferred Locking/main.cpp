#include <iostream>
#include <mutex>

std::mutex mtx;

void flexibleLockFunction() {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock); // Defer locking
    // Perform some other setup work here
    lock.lock(); // Explicitly lock when needed
    std::cout << "Lock acquired with deferred locking\n";
    // Lock is automatically released when 'lock' goes out of scope
}

int main() {
    flexibleLockFunction();
    return 0;
}
