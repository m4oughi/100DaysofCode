#include <iostream>
#include <future>

int computeSquare(int x) {
    return x * x;
}

int main() {
    std::future<int> result = std::async(computeSquare, 5);  // Create future with async
    std::cout << "Square: " << result.get() << std::endl;  // Retrieve the result
    return 0;
}
