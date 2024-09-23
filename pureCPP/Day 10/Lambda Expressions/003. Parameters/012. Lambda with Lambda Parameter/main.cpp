#include <iostream>
#include <functional>

int main() {
    // Lambda that takes another lambda as a parameter
    auto execute = [](const std::function<void(int)>& func, int value) {
        func(value);
    };
    execute([](int n) { std::cout << "Lambda with parameter: " << n << std::endl; }, 10);
    return 0;
}
