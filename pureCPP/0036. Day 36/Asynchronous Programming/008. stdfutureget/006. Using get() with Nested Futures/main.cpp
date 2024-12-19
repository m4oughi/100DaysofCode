#include <iostream>
#include <future>
#include <thread>

int multiply(int a, int b) {
    return a * b;
}

std::future<int> asyncMultiply(int a, int b) {
    return std::async(std::launch::async, multiply, a, b);
}

int main() {
    // Launch an asynchronous task that returns another future
    std::future<int> result = asyncMultiply(2, 3);

    // Wait and get the result from the future, which is a nested future
    std::cout << "Multiplication result: " << result.get() << std::endl;

    return 0;
}
