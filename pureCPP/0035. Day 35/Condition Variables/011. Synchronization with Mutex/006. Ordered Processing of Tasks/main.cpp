#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
int currentTask = 0;
const int totalTasks = 3;

void worker(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [id] { return id == currentTask; });
    std::cout << "Worker " << id << " is processing task " << currentTask << ".\n";
    ++currentTask;
    cv.notify_all();  // Notify all threads that task order has advanced
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < totalTasks; ++i) {
        threads.emplace_back(worker, i);
    }

    for (auto& t : threads) {
        t.join();
    }
    return 0;
}
