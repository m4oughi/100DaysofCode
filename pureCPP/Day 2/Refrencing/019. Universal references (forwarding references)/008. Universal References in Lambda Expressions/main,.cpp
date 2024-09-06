#include <iostream>
#include <utility>  // For std::forward

int main() {
    auto lambda = [](auto&& value) {
        std::cout << "Lambda received: " << std::forward<decltype(value)>(value) << std::endl;
    };

    lambda(50);            // rvalue
    int x = 60;
    lambda(x);            // lvalue

    return 0;
}
