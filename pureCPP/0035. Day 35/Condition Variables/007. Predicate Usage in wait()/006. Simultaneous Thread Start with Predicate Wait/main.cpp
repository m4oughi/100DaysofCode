#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
int readyCount = 0;
const int totalThreads = 3;
bool start = false;

void prepareAndWait(int id) {
    {
        std::lock_guard<std::mutex> lock(mtx);
        readyCount++;
        std::cout << "Thread " << id << " is ready.\n";
        if (readyCount == totalThreads) {
            start = true;
            cv.notify_all();  // Notify all threads to start when readyCount reaches target
        }
    }
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return start; });  // Wait until 'start' is true
    std::cout << "Thread " << id << " started!\n";
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 1; i <= totalThreads; ++i) {
        threads.emplace_back(prepareAndWait, i);
    }

    for (auto& t : threads) {
        t.join();
    }
    return 0;
}
