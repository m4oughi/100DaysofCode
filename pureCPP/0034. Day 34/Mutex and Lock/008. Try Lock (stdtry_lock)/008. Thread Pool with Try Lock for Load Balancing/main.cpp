#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <queue>
#include <chrono>

std::mutex taskMutex;
std::queue<int> taskQueue;

void worker(int id) {
    while (true) {
        if (taskMutex.try_lock()) {
            if (taskQueue.empty()) {
                taskMutex.unlock();
                break;
            }

            int task = taskQueue.front();
            taskQueue.pop();
            std::cout << "Worker " << id << " processing task " << task << "\n";
            taskMutex.unlock();

            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
        } else {
            std::cout << "Worker " << id << " waiting for task.\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
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