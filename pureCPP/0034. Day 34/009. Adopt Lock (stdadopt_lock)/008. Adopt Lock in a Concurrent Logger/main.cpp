#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <string>

std::mutex logMutex;

void logMessage(const std::string &message, int threadID) {
    logMutex.lock(); // Manual lock
    std::lock_guard<std::mutex> lg(logMutex, std::adopt_lock); // Adopt the lock

    // Perform logging
    std::cout << "Thread " << threadID << ": " << message << "\n";
    // Mutex automatically released when lg goes out of scope
}

void worker(int id) {
    for (int i = 0; i < 3; ++i) {
        logMessage("Processing item " + std::to_string(i), id);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 1; i <= 3; ++i) {
        threads.emplace_back(worker, i);
    }

    for (auto &t : threads) {
        t.join();
    }

    return 0;
}
