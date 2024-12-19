#include <iostream>
#include <future>
#include <thread>
#include <vector>

void computeTask(int id, std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    prom.set_value(id * 10);  // Set the result in the promise
}

int main() {
    std::vector<std::future<int>> futures;
    std::vector<std::promise<int>> promises(3);

    // Launch multiple threads to compute results
    for (int i = 0; i < 3; ++i) {
        futures.push_back(promises[i].get_future());  // Get futures for each promise
        std::thread(computeTask, i + 1, std::ref(promises[i])).detach();  // Launch threads
    }

    // Synchronize and wait for results from all threads
    for (auto& fut : futures) {
        std::cout << "Task result: " << fut.get() << std::endl;  // Output: 10, 20, 30
    }

    return 0;
}
