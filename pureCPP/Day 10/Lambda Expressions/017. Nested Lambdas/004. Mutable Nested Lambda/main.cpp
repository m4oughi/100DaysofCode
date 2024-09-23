#include <iostream>

int main() {
    int counter = 0;

    auto outerLambda = [counter]() mutable {
        auto innerLambda = [&counter]() mutable {
            counter++;
            std::cout << "Inner counter: " << counter << std::endl;
        };

        innerLambda();
        std::cout << "Outer counter: " << counter << std::endl;
    };

    outerLambda(); 
    outerLambda(); 
    return 0;
}
