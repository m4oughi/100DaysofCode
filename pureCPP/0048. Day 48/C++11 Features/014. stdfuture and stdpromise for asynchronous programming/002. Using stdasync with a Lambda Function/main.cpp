#include <iostream>
#include <future>

int main() {
    std::future<int> result = std::async([](int a, int b) { return a + b; }, 10, 20);

    std::cout << "Sum is: " << result.get() << "\n";
    return 0;
}
