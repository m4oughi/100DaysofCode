#include <iostream>
#include <functional>

int main() {
    auto add = [](int x) {
        return [x](int y) {
            return x + y;
        };
    };

    auto bindAdd = std::bind(add(5), std::placeholders::_1);
    std::cout << "Result: " << bindAdd(10) << std::endl; // Outputs: Result: 15

    return 0;
}
