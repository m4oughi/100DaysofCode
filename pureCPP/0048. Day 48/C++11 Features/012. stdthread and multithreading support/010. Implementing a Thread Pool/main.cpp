#include <iostream>
#include <thread>
#include <vector>

void worker(int id) {
    std::cout << "Thread " << id << " is working.\n";
}

int main() {
    std::vector<std::thread> workers;

    for (int i = 0; i < 5; ++i) {
        workers.emplace_back(worker, i);
    }

    for (auto& t : workers) {
        t.join();
    }

    return 0;
}
