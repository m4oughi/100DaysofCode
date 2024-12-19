#include <iostream>
#include <future>
#include <thread>
#include <atomic>
#include <chrono>

int longTask(std::atomic<int>& progress) {
    int total = 100;
    for (int i = 1; i <= total; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));  // Simulate work
        progress.store(i);  // Update progress
    }
    return total;
}

void progressMonitor(std::shared_future<int> result, std::atomic<int>& progress) {
    while (progress.load() < result.get()) {
        std::cout << "Progress: " << progress.load() << "%" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Sleep to simulate monitoring interval
    }
}

int main() {
    std::atomic<int> progress(0);
    std::shared_future<int> result = std::async(std::launch::async, longTask, std::ref(progress)).share();

    std::thread monitorThread(progressMonitor, result, std::ref(progress));

    // Wait for the long task to finish
    result.get();  // Wait for completion
    monitorThread.join();

    std::cout << "Task complete!" << std::endl;

    return 0;
}
