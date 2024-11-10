#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void threadA() {
    std::lock(mtx1, mtx2); // Atomically lock both
    std::lock_guard<std::mutex> lg1(mtx1, std::adopt_lock); // Adopt already-locked mtx1
    std::lock_guard<std::mutex> lg2(mtx2, std::adopt_lock); // Adopt already-locked mtx2
    std::cout << "Thread A acquired both locks using std::lock\n";
}

void threadB() {
    std::lock(mtx1, mtx2);
    std::lock_guard<std::mutex> lg1(mtx1, std::adopt_lock);
    std::lock_guard<std::mutex> lg2(mtx2, std::adopt_lock);
    std::cout << "Thread B acquired both locks using std::lock\n";
}

int main() {
    std::thread t1(threadA);
    std::thread t2(threadB);

    t1.join();
    t2.join();
    return 0;
}
