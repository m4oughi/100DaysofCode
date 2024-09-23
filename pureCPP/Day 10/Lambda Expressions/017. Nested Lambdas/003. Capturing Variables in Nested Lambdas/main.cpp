#include <iostream>

int main() {
    int a = 5, b = 10;

    auto outerLambda = [a](int x) {
        return [a, x](int y) {
            return a + x + y;
        };
    };

    auto nestedLambda = outerLambda(b); 
    std::cout << "Sum = " << nestedLambda(15) << std::endl; // Outputs: Sum = 30 (5 + 10 + 15)

    return 0;
}
