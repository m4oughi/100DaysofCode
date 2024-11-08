#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <vector>

std::mutex mtx;
std::condition_variable cv;
int counter = 0;
const int numThreads = 5;

void barrier(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    ++counter;
    std::cout << "Thread " << id << " reached barrier." << std::endl;
    
    if (counter < numThreads) {
        cv.wait(lock, [] { return counter >= numThreads; });
    } else {
        cv.notify_all();
    }
    std::cout << "Thread " << id << " proceeding after barrier." << std::endl;
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
