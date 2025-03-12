#include <iostream>
#include <future>

int compute() {
    return 42;
}

int main() {
    std::future<int> result = std::async(compute);
    std::cout << "Result: " << result.get() << "\n";

    return 0;
}
