#include <iostream>
#include <thread>
#include <vector>

void exceptionTask(int id) {
    if (id == 2) {
        throw std::runtime_error("Exception in thread 2");
    }
    std::cout << "Thread " << id << " is running." << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 1; i <= 3; ++i) {
        threads.emplace_back(exceptionTask, i);
    }

    // Join threads with exception handling
    try {
        for (auto& t : threads) {
            if (t.joinable()) {
                t.join();
            }
        }
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
