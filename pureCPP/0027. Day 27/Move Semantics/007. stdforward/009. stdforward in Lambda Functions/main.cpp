#include <iostream>
#include <utility>

auto createLambda = [] (auto&& arg) {
    return std::forward<decltype(arg)>(arg);  // Forwarding within lambda
};

void print(int& x) {
    std::cout << "Lvalue: " << x << std::endl;
}

void print(int&& x) {
    std::cout << "Rvalue: " << x << std::endl;
}

int main() {
    int a = 42;
    print(createLambda(a));      // Lvalue forwarded
    print(createLambda(100));    // Rvalue forwarded
}
