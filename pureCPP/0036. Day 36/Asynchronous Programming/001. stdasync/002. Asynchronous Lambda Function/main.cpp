#include <iostream>
#include <future>

int main() {
    auto lambdaTask = [](int x, int y) { return x + y; };
    std::future<int> result = std::async(lambdaTask, 10, 20);  // Lambda function with arguments
    std::cout << "Sum is " << result.get() << std::endl;
    return 0;
}
