#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int computeProduct(int a, int b) {
    std::this_thread::sleep_for(std::chrono::seconds(4)); // Simulate a long computation
    return a * b;
}

int main() {
    std::future<int> result = std::async(std::launch::async, computeProduct, 4, 5);
    auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(3);

    // Wait until the specified deadline (3 seconds)
    if (result.wait_until(deadline) == std::future_status::timeout) {
        std::cout << "Timed out waiting for result\n";
    } else {
        std::cout << "Result: " << result.get() << std::endl; // Will not be reached if timed out
    }

    return 0;
}
