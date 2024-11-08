#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <vector>

std::mutex mtx;
std::condition_variable cv;
int count = 0;
const int numThreads = 3;

void barrier(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    ++count;
    if (count < numThreads) {
        cv.wait(lock, [] { return count >= numThreads; });
    } else {
        cv.notify_all();
    }
    std::cout << "Thread " << id << " passed the barrier." << std::endl;
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(barrier, i);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
