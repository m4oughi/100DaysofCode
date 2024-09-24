#include <iostream>

int main() {
    int a = 5, b = 10;

    auto outerLambda = [&a, b]() mutable {
        auto innerLambda = [a, &b]() mutable {
            a += 10;
            b += 10;
            std::cout << "Inner lambda: a = " << a << ", b = " << b << std::endl;
        };
        innerLambda();
        std::cout << "Outer lambda: a = " << a << ", b = " << b << std::endl;
    };

    outerLambda(); // Outputs: Inner lambda: a = 15, b = 20
                   //          Outer lambda: a = 15, b = 20
    std::cout << "Main: a = " << a << ", b = " << b << std::endl; // Outputs: Main: a = 5, b = 20

    return 0;
}
