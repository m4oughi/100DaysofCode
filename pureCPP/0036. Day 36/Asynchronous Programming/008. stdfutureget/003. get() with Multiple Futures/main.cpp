#include <iostream>
#include <future>
#include <thread>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Launch multiple asynchronous tasks
    std::future<int> result1 = std::async(std::launch::async, multiply, 2, 3);
    std::future<int> result2 = std::async(std::launch::async, multiply, 4, 5);

    // Wait and get results from both futures
    std::cout << "Result1: " << result1.get() << std::endl;  // Result from first task (2*3)
    std::cout << "Result2: " << result2.get() << std::endl;  // Result from second task (4*5)

    return 0;
}
