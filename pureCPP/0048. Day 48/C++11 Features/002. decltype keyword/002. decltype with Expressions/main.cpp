#include <iostream>

int main() {
    int a = 10;
    double b = 5.5;

    decltype(a + b) result; // Deduces as double since `a + b` results in double
    result = a + b;

    std::cout << "Result: " << result << std::endl;
    return 0;
}
