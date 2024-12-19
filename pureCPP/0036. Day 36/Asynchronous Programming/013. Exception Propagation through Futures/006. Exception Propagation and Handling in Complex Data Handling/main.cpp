#include <iostream>
#include <future>
#include <thread>
#include <vector>

std::vector<int> generateData(bool shouldThrow) {
    if (shouldThrow) {
        throw std::runtime_error("Error generating data");
    }
    return {1, 2, 3, 4, 5};  // Return some sample data
}

int main() {
    std::future<std::vector<int>> fut = std::async(std::launch::async, generateData, true);

    try {
        std::vector<int> data = fut.get();  // This will throw an exception
        std::cout << "Data: ";
        for (int num : data) {
            std::cout << num << " ";
        }
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: Error generating data
    }

    return 0;
}
