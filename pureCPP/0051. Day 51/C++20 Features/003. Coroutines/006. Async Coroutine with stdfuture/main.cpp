#include <iostream>
#include <coroutine>
#include <future>

std::future<int> asyncAddition(int a, int b) {
    co_return a + b;
}

int main() {
    std::future<int> result = asyncAddition(5, 10);
    std::cout << "Computing asynchronously...\n";
    std::cout << "Result: " << result.get() << '\n';
}
