#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::recursive_timed_mutex rtmtx;

void backoffTask(int depth) {
    int attempt = 0;
    int backoffTime = 50; // Start with 50 ms

    while (depth > 0 && attempt < 5) { // Max 5 attempts
        if (rtmtx.try_lock_for(std::chrono::milliseconds(backoffTime))) {
            std::cout << "Depth " << depth << ", acquired lock on attempt " << attempt + 1 << "\n";
            backoffTask(depth - 1); // Recursive call
            rtmtx.unlock();
            return;
        } else {
            std::cout << "Depth " << depth << ", failed to acquire lock on attempt " << attempt + 1 << "\n";
            attempt++;
            backoffTime *= 2; // Increase backoff time
        }
    }
}

int main() {
    std::thread t1(backoffTask, 3);
    std::thread t2(backoffTask, 3);

    t1.join();
    t2.join();
    return 0;
}
