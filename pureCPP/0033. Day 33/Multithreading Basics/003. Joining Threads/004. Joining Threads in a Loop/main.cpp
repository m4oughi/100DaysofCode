#include <iostream>
#include <thread>
#include <vector>

void task(int id) {
    std::cout << "Thread " << id << " is executing!" << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 1; i <= 5; ++i) {
        threads.push_back(std::thread(task, i)); // Create threads
    }

    for (auto& t : threads) {
        t.join(); // Join all threads
    }

    return 0;
}
