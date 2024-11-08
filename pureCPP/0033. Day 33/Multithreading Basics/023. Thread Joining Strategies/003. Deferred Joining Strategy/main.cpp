#include <iostream>
#include <thread>
#include <vector>

void deferredTask(int id) {
    std::cout << "Thread " << id << " started." << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    // Start all threads
    for (int i = 1; i <= 4; ++i) {
        threads.emplace_back(deferredTask, i);
    }

    // Perform other operations here if needed

    // Join threads in a separate loop
    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
