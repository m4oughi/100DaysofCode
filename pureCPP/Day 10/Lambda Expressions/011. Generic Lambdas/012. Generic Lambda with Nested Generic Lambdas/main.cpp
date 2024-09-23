#include <iostream>

int main() {
    auto outerLambda = [](auto x) {
        auto innerLambda = [](auto y) {
            return y * y;
        };
        return innerLambda(x) + x;
    };

    std::cout << outerLambda(3) << std::endl;    // Outputs: 12 (3*3 + 3)
    std::cout << outerLambda(4.5) << std::endl;  // Outputs: 24.75 (4.5*4.5 + 4.5)
    return 0;
}
