#include <iostream>
#include <future>

int computeValue() {
    return 100;
}

int main() {
    std::shared_future<int> sharedResult = std::async(computeValue).share();  // Get shared future

    std::cout << "Consumer 1: " << sharedResult.get() << std::endl;
    std::cout << "Consumer 2: " << sharedResult.get() << std::endl;  // Both consumers can access the same result
    return 0;
}
