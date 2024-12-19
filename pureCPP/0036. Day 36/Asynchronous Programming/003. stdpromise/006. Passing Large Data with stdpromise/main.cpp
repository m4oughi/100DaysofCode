#include <iostream>
#include <future>
#include <thread>
#include <vector>

void generateLargeData(std::promise<std::vector<int>>& prom) {
    std::vector<int> largeData(1000000, 42);  // Simulate large data
    prom.set_value(std::move(largeData));  // Move the data into the promise
}

int main() {
    std::promise<std::vector<int>> prom;
    std::future<std::vector<int>> result = prom.get_future();

    std::thread t(generateLargeData, std::ref(prom));  // Start generating large data in a new thread

    std::vector<int> data = result.get();  // Get the result (large data)
    std::cout << "Data size: " << data.size() << std::endl;  // Verify the size of the data

    t.join();  // Wait for the thread to finish
    return 0;
}
