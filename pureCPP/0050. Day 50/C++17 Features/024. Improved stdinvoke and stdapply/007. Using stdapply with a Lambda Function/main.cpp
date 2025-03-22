#include <iostream>
#include <tuple>
#include <functional>

int main() {
    auto lambda = [](int x, int y) { return x * y; };
    std::tuple<int, int> values{3, 4};
    
    int result = std::apply(lambda, values); // Calls lambda(3, 4)
    std::cout << "Lambda Result: " << result << "\n";
    return 0;
}
