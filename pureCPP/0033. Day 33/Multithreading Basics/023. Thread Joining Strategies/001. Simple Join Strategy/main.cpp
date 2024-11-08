#include <iostream>
#include <thread>
#include <vector>

void simpleTask(int id) {
    std::cout << "Thread " << id << " is executing." << std::endl;
}

int main() {
    std::vector<std::thread> threads;
    
    for (int i = 1; i <= 5; ++i) {
        threads.emplace_back(simpleTask, i);
    }

    for (auto& t : threads) {
        t.join(); // Wait for each thread to finish
    }

    return 0;
}
