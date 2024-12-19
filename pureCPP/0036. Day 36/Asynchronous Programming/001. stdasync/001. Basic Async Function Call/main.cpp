#include <iostream>
#include <future>

int square(int x) {
    return x * x;
}

int main() {
    std::future<int> result = std::async(square, 10);  // Launch async task
    std::cout << "Square of 10 is " << result.get() << std::endl;  // Get the result
    return 0;
}
