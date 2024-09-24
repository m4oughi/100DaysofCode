#include <iostream>

int main() {
    int x = 400;
    const int &ref = std::move(x);  // Binds to the R-value returned by std::move
    std::cout << ref << std::endl;  // Output: 400
    // ref = 500;  // Error: Cannot modify ref

    return 0;
}