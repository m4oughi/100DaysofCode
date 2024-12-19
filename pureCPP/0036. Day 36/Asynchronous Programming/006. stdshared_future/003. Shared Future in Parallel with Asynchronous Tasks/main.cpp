#include <iostream>
#include <future>
#include <thread>

int computeFactorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Start multiple asynchronous tasks
    std::shared_future<int> factorialResult = std::async(std::launch::async, computeFactorial, 5).share();
    std::shared_future<int> factorialResult2 = std::async(std::launch::async, computeFactorial, 6).share();

    // Use shared_future to retrieve results from multiple threads
    std::cout << "Factorial of 5: " << factorialResult.get() << std::endl;
    std::cout << "Factorial of 6: " << factorialResult2.get() << std::endl;

    return 0;
}
