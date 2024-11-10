#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void threadA() {
    std::unique_lock<std::mutex> ul1(mtx1, std::defer_lock);
    std::unique_lock<std::mutex> ul2(mtx2, std::defer_lock);

    std::lock(ul1, ul2); // Atomically lock both with deferred lock
    std::cout << "Thread A acquired both locks with deferred locking\n";
}

void threadB() {
    std::unique_lock<std::mutex> ul1(mtx1, std::defer_lock);
    std::unique_lock<std::mutex> ul2(mtx2, std::defer_lock);

    std::lock(ul1, ul2);
    std::cout << "Thread B acquired both locks with deferred locking\n";
}

int main() {
    std::thread t1(threadA);
    std::thread t2(threadB);

    t1.join();
    t2.join();
    return 0;
}
