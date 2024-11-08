#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void processData(int id) {
    std::unique_lock<std::mutex> lock(mtx);  // Lock mutex
    std::cout << "Thread " << id << " is processing..." << std::endl;

    lock.unlock();  // Manually unlock before the end of the function
    std::cout << "Thread " << id << " has unlocked and is continuing without lock." << std::endl;
}

int main() {
    std::thread t1(processData, 1);
    std::thread t2(processData, 2);

    t1.join();
    t2.join();

    return 0;
}
