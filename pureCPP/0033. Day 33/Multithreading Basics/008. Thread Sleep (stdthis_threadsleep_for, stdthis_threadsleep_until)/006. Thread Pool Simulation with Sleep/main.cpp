#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>

void workerThread(int id) {
    int sleepTime = rand() % 5 + 1; // Random sleep between 1 and 5 seconds
    std::cout << "Worker " << id << " sleeping for " << sleepTime << " seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(sleepTime));
    std::cout << "Worker " << id << " finished." << std::endl;
}

int main() {
    srand(time(0));
    std::vector<std::thread> threads;

    for (int i = 1; i <= 5; ++i) {
        threads.push_back(std::thread(workerThread, i));
    }

    for (auto& th : threads) {
        th.join();
    }

    return 0;
}
