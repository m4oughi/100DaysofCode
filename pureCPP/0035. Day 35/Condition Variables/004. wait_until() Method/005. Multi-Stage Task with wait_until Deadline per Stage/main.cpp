#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool stageCompleted = false;
int currentStage = 1;

void performStage(int maxAttempts) {
    std::unique_lock<std::mutex> lock(mtx);
    for (int i = 1; i <= maxAttempts && currentStage <= 3; ++i) {
        auto stageDeadline = std::chrono::system_clock::now() + std::chrono::seconds(3);
        if (cv.wait_until(lock, stageDeadline, [] { return stageCompleted; })) {
            std::cout << "Stage " << currentStage << " completed.\n";
            currentStage++;
            stageCompleted = false;
            i = 0; // Reset attempts for the next stage
        } else {
            std::cout << "Attempt " << i << " to complete stage " << currentStage << " timed out.\n";
        }
    }

    if (currentStage > 3) {
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
    }
}

int main() {
    std::thread task(performStage, 3);
    std::thread completer(completeStage);

    task.join();
    completer.join();
    return 0;
}
