#include <iostream>

int main() {
    int x = 10;
    auto captureByReference = [&x]() {
        x += 5;
    };

    captureByReference();
    std::cout << "Modified x: " << x << std::endl; // Outputs: Modified x: 15
    return 0;
}
