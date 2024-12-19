#include <iostream>
#include <future>

int main() {
    std::future<int> result = std::async([](int x) { return x + 10; }, 5);  // Lambda function
    std::cout << "Result: " << result.get() << std::endl;
    return 0;
}
