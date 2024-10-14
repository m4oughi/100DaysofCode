#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void workerThread() {
    std::unique_lock<std::mutex> lock(mtx);  // Mutex locked
    cv.wait(lock, [] { return ready; });
    std::cout << "Worker thread proceeding." << std::endl;
    // Mutex unlocked when `lock` goes out of scope
}

int main() {
    std::thread worker(workerThread);
    
    {
        std::lock_guard<std::mutex> lock(mtx);  // Mutex locked
        ready = true;
        cv.notify_one();
        // Mutex unlocked when `lock` goes out of scope
    }
    
    worker.join();
}
