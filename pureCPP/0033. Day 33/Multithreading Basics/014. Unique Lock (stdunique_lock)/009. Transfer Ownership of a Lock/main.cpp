#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void worker(std::unique_lock<std::mutex> lock) {
    std::cout << "Worker thread has acquired the lock." << std::endl;
}

void mainThread() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Main thread acquired the lock, passing to worker thread..." << std::endl;
    std::thread t(worker, std::move(lock));  // Transfer ownership of the lock
    t.join();
}

int main() {
    mainThread();
    return 0;
}
