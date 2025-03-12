#include <iostream>
#include <future>
#include <thread>

int computeValue() {
    return 42;
}

int main() {
    std::shared_future<int> sharedResult = std::async(std::launch::async, computeValue);

    std::cout << "Thread 1: " << sharedResult.get() << "\n";
    std::cout << "Thread 2: " << sharedResult.get() << "\n"; 

    return 0;
}
