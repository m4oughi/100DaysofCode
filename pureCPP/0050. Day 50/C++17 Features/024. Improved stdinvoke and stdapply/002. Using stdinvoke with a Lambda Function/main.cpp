#include <iostream>
#include <functional>

int main() {
    auto lambda = [](int x, int y) { return x * y; };
    int result = std::invoke(lambda, 4, 6); // Calls lambda(4, 6)
    
    std::cout << "Lambda Result: " << result << "\n";
    return 0;
}
