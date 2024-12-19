#include <iostream>
#include <future>

class Math {
public:
    int add(int a, int b) { return a + b; }
};

int main() {
    Math math;
    std::future<int> result = std::async(&Math::add, &math, 10, 20);  // Async call to member function
    std::cout << "Result: " << result.get() << std::endl;
    return 0;
}
