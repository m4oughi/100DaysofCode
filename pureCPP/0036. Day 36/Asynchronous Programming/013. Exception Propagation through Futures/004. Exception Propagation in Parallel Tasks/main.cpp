#include <iostream>
#include <future>
#include <thread>

int worker(int val) {
    if (val == 3) {
        throw std::runtime_error("Error in worker with value 3");
    }
    return val * 2;
}

int main() {
    std::vector<std::future<int>> futures;

    // Launch multiple tasks
    for (int i = 1; i <= 5; ++i) {
        futures.push_back(std::async(std::launch::async, worker, i));
    }

    // Wait for all tasks and handle exceptions
    for (auto& fut : futures) {
        try {
            int result = fut.get();  // Wait and get result, or propagate exception
            std::cout << "Result: " << result << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Caught exception: " << e.what() << std::endl;  // Output for worker with value 3
        }
    }

    return 0;
}
