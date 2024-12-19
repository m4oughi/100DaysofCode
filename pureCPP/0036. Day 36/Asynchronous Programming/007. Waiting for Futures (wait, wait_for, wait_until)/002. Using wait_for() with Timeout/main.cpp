#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int computeSum(int a, int b) {
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Simulate a long computation
    return a + b;
}

int main() {
    std::future<int> result = std::async(std::launch::async, computeSum, 5, 3);

    // Wait for the result with a timeout of 2 seconds
    if (result.wait_for(std::chrono::seconds(2)) == std::future_status::timeout) {
        std::cout << "Timed out waiting for result\n";
    } else {
        std::cout << "Result: " << result.get() << std::endl; // Will not be reached if timed out
    }

    return 0;
}
