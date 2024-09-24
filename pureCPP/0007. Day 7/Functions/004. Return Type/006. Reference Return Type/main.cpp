#include <iostream>

// Function declaration with reference return type
int& getLarger(int& a, int& b);

int main() {
    int x = 5, y = 10;
    int& larger = getLarger(x, y);  // Function call, store reference
    larger++;  // Modify larger number directly
    std::cout << "x: " << x << ", y: " << y << std::endl;
    return 0;
}

// Function definition with reference return type
int& getLarger(int& a, int& b) {
    return (a > b) ? a : b;  // Returns reference to the larger value
}
