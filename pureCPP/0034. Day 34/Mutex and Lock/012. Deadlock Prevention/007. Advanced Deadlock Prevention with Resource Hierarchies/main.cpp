#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtxA, mtxB, mtxC;

void thread1() {
    std::scoped_lock lock(mtxA, mtxB, mtxC); // Lock in a predefined order
    std::cout << "Thread 1 acquired mtxA, mtxB, and mtxC in order\n";
}

void thread2() {
    std::scoped_lock lock(mtxA, mtxB, mtxC); // Lock in the same order as thread1
    std::cout << "Thread 2 acquired mtxA, mtxB, and mtxC in order\n";
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();
    return 0;
}
