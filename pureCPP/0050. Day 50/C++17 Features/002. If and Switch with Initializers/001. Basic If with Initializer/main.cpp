#include <iostream>

int main() {
    if (int x = 42; x > 0) {  // Declare and initialize x inside if condition
        std::cout << "x is positive: " << x << '\n';
    }
    return 0;
}
