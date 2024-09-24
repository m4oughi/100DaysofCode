#include <iostream>

int main() {
    int x = 10;
    auto modifyReference = [&x]() mutable {
        x += 5; // Modifies the actual 'x' outside the lambda
    };

    modifyReference();
    std::cout << "Modified x: " << x << std::endl; // Outputs: Modified x: 15
    return 0;
}
