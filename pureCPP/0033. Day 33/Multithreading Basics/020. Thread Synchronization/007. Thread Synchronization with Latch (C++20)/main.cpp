#include <iostream>
#include <thread>
#include <latch>

const int numThreads = 5;
std::latch syncPoint(numThreads);

void task(int id) {
    std::cout << "Thread " << id << " is waiting at the latch." << std::endl;
    syncPoint.arrive_and_wait();
    std::cout << "Thread " << id << " passed the latch." << std::endl;
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(task, i);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
