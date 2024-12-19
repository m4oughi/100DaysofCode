#include <iostream>
#include <future>

int compute() {
    return 42;
}

int main() {
    std::shared_future<int> sharedResult = std::async(compute).share();  // Shared future
    std::cout << "Consumer 1: " << sharedResult.get() << std::endl;  // First consumer
    std::cout << "Consumer 2: " << sharedResult.get() << std::endl;  // Second consumer
    return 0;
}
