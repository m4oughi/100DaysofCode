#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool stageCompleted = false;
int stage = 1;

void stageWorker(int maxAttempts) {
    int attempts = 0;
    std::unique_lock<std::mutex> lock(mtx);
    while (stage <= 3 && attempts < maxAttempts) {
        if (cv.wait_for(lock, std::chrono::seconds(1), [] { return stageCompleted; })) {
            std::cout << "Stage " << stage << " completed.\n";
            stage++;
            stageCompleted = false;
            attempts = 0;
        } else {
            std::cout << "Attempt " << ++attempts << " to complete stage " << stage << " failed.\n";
        }
    }

    if (stage > 3) {
        std::cout << "All stages completed successfully.\n";
    } else {
        std::cout << "Failed to complete all stages within attempt limit.\n";
    }
}

void completeStage() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    for (int i = 1; i <= 3; ++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        {
            std::lock_guard<std::mutex> lock(mtx);
            stageCompleted = true;
        }
        cv.notify_one();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread worker(stageWorker, 5);
    std::thread completer(completeStage);

    worker.join();
    completer.join();
    return 0;
}
