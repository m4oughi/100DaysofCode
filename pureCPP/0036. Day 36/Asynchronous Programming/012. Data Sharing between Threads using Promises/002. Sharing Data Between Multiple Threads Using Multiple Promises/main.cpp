#include <iostream>
#include <future>
#include <thread>
#include <vector>

void worker(std::promise<int>& prom, int value) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    prom.set_value(value);  // Send the result to the main thread
}

int main() {
    std::vector<std::promise<int>> promises(3);  // Create multiple promises
    std::vector<std::future<int>> futures;
    
    // Launch multiple threads
    for (int i = 0; i < 3; ++i) {
        futures.push_back(promises[i].get_future());  // Get future for each promise
        std::thread(worker, std::ref(promises[i]), i * 10).detach();  // Launch threads
    }

    // Wait for all results from the futures
    for (auto& fut : futures) {
        std::cout << "Result: " << fut.get() << std::endl;  // Output: 0, 10, 20
    }

    return 0;
}
