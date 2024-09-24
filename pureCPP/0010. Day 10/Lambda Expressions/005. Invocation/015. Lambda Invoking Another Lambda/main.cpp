#include <iostream>

int main() {
    auto outerLambda = [](int a, int b) {
        auto innerLambda = [](int x, int y) {
            return x + y;
        };
        return innerLambda(a, b) * 2;
    };

    std::cout << "Result: " << outerLambda(4, 5) << std::endl; // Outputs: Result: 18
    return 0;
}
