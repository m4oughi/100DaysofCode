#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void timedTask(int id) {
    std::cout << "Thread " << id << " is starting a timed task." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(id));  // Variable sleep time
    std::cout << "Thread " << id << " completed its task." << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 1; i <= 3; ++i) {
        threads.emplace_back(timedTask, i);
    }

    for (auto& t : threads) {
        if (t.joinable()) {
            if (t.joinable()) {
                t.join();
            } else {
                std::cout << "Thread did not complete in the expected time." << std::endl;
            }
        }
    }

    return 0;
}
