#include <iostream>
#include <mutex>

std::mutex mtx1, mtx2;

void dualAdoptLock() {
    std::lock(mtx1, mtx2); // Lock both mutexes at once to avoid deadlock
    std::lock_guard<std::mutex> lg1(mtx1, std::adopt_lock); // Adopt lock for mtx1
    std::lock_guard<std::mutex> lg2(mtx2, std::adopt_lock); // Adopt lock for mtx2

    std::cout << "Both mutexes adopted using std::adopt_lock.\n";
    // Locks will be released when lg1 and lg2 go out of scope
}

int main() {
    dualAdoptLock();
    return 0;
}
