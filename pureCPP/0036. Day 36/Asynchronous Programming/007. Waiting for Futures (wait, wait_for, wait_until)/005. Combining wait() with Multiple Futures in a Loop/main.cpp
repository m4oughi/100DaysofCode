#include <iostream>
#include <future>
#include <thread>
#include <vector>

int task(int id) {
    std::this_thread::sleep_for(std::chrono::seconds(id));  // Varying times
    return id * 10;
}

int main() {
    std::vector<std::future<int>> futures;
    
    // Launch multiple asynchronous tasks
    for (int i = 1; i <= 3; ++i) {
        futures.push_back(std::async(std::launch::async, task, i));
    }

    // Wait and process futures as they complete
    for (auto& fut : futures) {
        fut.wait();  // Block until each task completes
        std::cout << "Result: " << fut.get() << std::endl;
    }

    return 0;
}
