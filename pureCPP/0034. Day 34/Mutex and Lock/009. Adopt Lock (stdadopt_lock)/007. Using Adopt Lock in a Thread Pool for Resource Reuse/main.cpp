#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <queue>
#include <chrono>

std::mutex mtx;
std::queue<int> taskQueue;

void worker(int id) {
    while (true) {
        mtx.lock(); // Manually lock
        std::lock_guard<std::mutex> lg(mtx, std::adopt_lock); // Adopt the lock
        if (taskQueue.empty()) break;

        int task = taskQueue.front();
        taskQueue.pop();
        std::cout << "Worker " << id << " processing task " << task << "\n";

        // Mutex will be unlocked when lg goes out of scope
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
    }
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        taskQueue.push(i); // Adding tasks to the queue
    }

    std::thread t1(worker, 1);
    std::thread t2(worker, 2);
    std::thread t3(worker, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
