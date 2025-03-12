#include <iostream>

int main() {
    auto lambda = [](int x, int y) { return x + y; };

    decltype(lambda) anotherLambda = lambda; // anotherLambda is same as lambda

    std::cout << "Lambda Sum: " << anotherLambda(5, 6) << std::endl;
    return 0;
}
