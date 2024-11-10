#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void threadA() {
    std::lock_guard<std::mutex> lg1(mtx1);
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    std::lock_guard<std::mutex> lg2(mtx2);
    std::cout << "Thread A acquired both locks\n";
}

void threadB() {
    std::lock_guard<std::mutex> lg2(mtx2);
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    std::lock_guard<std::mutex> lg1(mtx1);
    std::cout << "Thread B acquired both locks\n";
}

int main() {
    std::thread t1(threadA);
    std::thread t2(threadB);

    t1.join();
    t2.join();
    return 0;
}
