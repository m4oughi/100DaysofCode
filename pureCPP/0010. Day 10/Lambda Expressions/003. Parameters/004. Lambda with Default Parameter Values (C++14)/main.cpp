#include <iostream>

int main() {
    // Lambda with default parameter values
    auto defaultParams = [](int x, int y = 10) {
        std::cout << "x + y = " << x + y << std::endl;
    };
    defaultParams(5);   // Outputs x + y = 15
    defaultParams(3, 4); // Outputs x + y = 7
    return 0;
}
