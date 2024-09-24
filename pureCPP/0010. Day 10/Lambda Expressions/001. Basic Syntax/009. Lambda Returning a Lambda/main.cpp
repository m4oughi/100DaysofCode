#include <iostream>

int main() {
    // Lambda that returns another lambda
    auto outerLambda = [](int x) {
        return [x](int y) { return x + y; };
    };
    auto innerLambda = outerLambda(10);  // Returns a lambda with 'x' captured
    std::cout << "Result of inner lambda: " << innerLambda(5) << std::endl;  // Calls inner lambda with 'y'
    return 0;
}
