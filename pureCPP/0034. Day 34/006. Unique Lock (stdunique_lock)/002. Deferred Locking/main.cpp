#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void processTask() {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock); // Lock is deferred
    std::cout << "Doing some work outside lock.\n";
    
    lock.lock(); // Lock acquired only when needed
    std::cout << "Processing inside lock.\n";
    lock.unlock(); // Manually unlock if needed
    
    std::cout << "Continuing work outside lock.\n";
}

int main() {
    std::thread t1(processTask);
    std::thread t2(processTask);

    t1.join();
    t2.join();
    return 0;
}
