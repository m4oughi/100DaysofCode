#include <iostream>
#include <future>
#include <thread>

int computeSum(int a, int b) {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate a long computation
    return a + b;
}

int main() {
    std::future<int> result = std::async(std::launch::async, computeSum, 5, 3);

    // Wait for the result to be ready (blocks the main thread until computation finishes)
    result.wait();  // Blocks until the result is available

    std::cout << "Result: " << result.get() << std::endl;  // Access the result

    return 0;
}
