#include <iostream>
#include <future>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Launch asynchronously
    std::future<int> asyncResult = std::async(std::launch::async, multiply, 5, 5);
    std::cout << "Async Multiply: " << asyncResult.get() << std::endl;

    // Launch deferred (only runs when .get() is called)
    std::future<int> deferredResult = std::async(std::launch::deferred, multiply, 5, 5);
    std::cout << "Deferred Multiply: " << deferredResult.get() << std::endl;
    return 0;
}
