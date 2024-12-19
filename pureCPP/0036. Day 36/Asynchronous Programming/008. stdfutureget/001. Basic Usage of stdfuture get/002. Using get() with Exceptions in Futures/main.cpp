#include <iostream>
#include <future>
#include <thread>

int add(int a, int b) {
    return a + b;
}

int main() {
    // Launch asynchronous task
    std::future<int> result = std::async(std::launch::async, add, 5, 3);

    // Wait and get the result from the future
    std::cout << "Result: " << result.get() << std::endl;  // Get the result of add(5, 3)

    return 0;
}
