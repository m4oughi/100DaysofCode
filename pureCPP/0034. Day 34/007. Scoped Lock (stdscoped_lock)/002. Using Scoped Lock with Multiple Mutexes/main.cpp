#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void task() {
    std::scoped_lock lock(mtx1, mtx2); // Locks multiple mutexes at once
    std::cout << "Task running with both mtx1 and mtx2 locked.\n";
}

int main() {
    std::thread t1(task);
    std::thread t2(task);

    t1.join();
    t2.join();
    return 0;
}
