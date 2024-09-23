#include <iostream>

int main() {
    // Lambda with two parameters
    auto multipleParams = [](int x, int y) {
        std::cout << "x + y = " << x + y << std::endl;
    };
    multipleParams(5, 7);
    return 0;
}
