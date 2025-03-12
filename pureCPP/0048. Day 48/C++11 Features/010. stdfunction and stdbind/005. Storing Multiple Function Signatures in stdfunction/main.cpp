#include <iostream>
#include <functional>

int add(int a, int b) {
    return a + b;
}

double multiply(double x, double y) {
    return x * y;
}

int main() {
    std::function<int(int, int)> func1 = add;
    std::function<double(double, double)> func2 = multiply;

    std::cout << "Addition: " << func1(10, 5) << std::endl;
    std::cout << "Multiplication: " << func2(2.5, 4.0) << std::endl;

    return 0;
}
