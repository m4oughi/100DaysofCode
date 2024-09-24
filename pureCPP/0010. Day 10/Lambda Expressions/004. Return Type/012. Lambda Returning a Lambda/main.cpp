#include <iostream>
#include <functional>

int main() {
    // Lambda returning another lambda
    auto outerLambda = []() -> std::function<int(int)> {
        return [](int n) -> int {
            return n * n;
        };
    };
    auto innerLambda = outerLambda();
    std::cout << "Square of 5: " << innerLambda(5) << std::endl; // Outputs: Square of 5: 25
    return 0;
}
