#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool paused = true;

void worker(int id) {
    {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !paused; });
    }
    std::cout << "Worker " << id << " resuming after pause.\n";
}

void resumeAll() {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate some delay
    {
        std::lock_guard<std::mutex> lock(mtx);
        paused = false;
    }
    cv.notify_all();  // Notify all threads to resume after pause
}

int main() {
    std::vector<std::thread> workers;
    for (int i = 1; i <= 3; ++i) {
        workers.emplace_back(worker, i);
    }

    std::thread resumeThread(resumeAll);

    for (auto& worker : workers) {
        worker.join();
    }
    resumeThread.join();
    return 0;
}
