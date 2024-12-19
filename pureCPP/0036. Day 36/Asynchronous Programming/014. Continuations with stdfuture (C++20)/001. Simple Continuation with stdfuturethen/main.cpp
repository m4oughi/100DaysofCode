#include <iostream>
#include <future>
#include <thread>

int worker() {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    return 42;  // Return some data
}

int main() {
    std::future<int> fut = std::async(std::launch::async, worker);

    fut.then([](std::future<int> f) {
        std::cout << "Continuation: Received value: " << f.get() << std::endl;
    });

    std::this_thread::sleep_for(std::chrono::seconds(2));  // Wait for the result
    return 0;
}
