#include <iostream>
#include <functional>

// Function declaration accepting lambda as parameter
void applyFunction(int x, std::function<int(int)> func);

int main() {
    // Call function with lambda as parameter
    applyFunction(5, [](int n) { return n * n; });
    return 0;
}

// Function definition accepting lambda as parameter
void applyFunction(int x, std::function<int(int)> func) {
    std::cout << "Result: " << func(x) << std::endl;
}
