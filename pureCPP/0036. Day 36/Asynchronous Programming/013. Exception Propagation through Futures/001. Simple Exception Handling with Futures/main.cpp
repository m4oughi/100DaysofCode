#include <iostream>
#include <future>
#include <thread>

void worker() {
    throw std::runtime_error("An error occurred in worker thread");
}

int main() {
    std::future<void> fut = std::async(std::launch::async, worker);

    try {
        fut.get();  // Wait for the result and propagate any exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: An error occurred in worker thread
    }

    return 0;
}
