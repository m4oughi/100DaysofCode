#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void threadA() {
    std::scoped_lock lock(mtx1, mtx2); // Lock both atomically
    std::cout << "Thread A acquired both locks with scoped_lock\n";
}

void threadB() {
    std::scoped_lock lock(mtx1, mtx2); // Lock both atomically
    std::cout << "Thread B acquired both locks with scoped_lock\n";
}

int main() {
    std::thread t1(threadA);
    std::thread t2(threadB);

    t1.join();
    t2.join();
    return 0;
}
