#include <iostream>
#include <mutex>

std::mutex mtx1, mtx2;

void multiLockFunction() {
    std::scoped_lock lock(mtx1, mtx2); // Locks both mtx1 and mtx2
    std::cout << "Both mutexes acquired with scoped_lock\n";
    // Both mutexes will be automatically released when lock goes out of scope
}

int main() {
    multiLockFunction();
    return 0;
}
