#include <iostream>
#include <future>
#include <thread>

int worker(bool shouldThrow) {
    if (shouldThrow) {
        throw std::runtime_error("Error in worker thread");
    }
    return 42;
}

int main() {
    std::future<int> fut = std::async(std::launch::async, worker, true);

    try {
        int result = fut.get();  // This will throw an exception
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: Error in worker thread
    }

    return 0;
}
