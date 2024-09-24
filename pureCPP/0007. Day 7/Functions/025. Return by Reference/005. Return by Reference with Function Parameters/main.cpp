#include <iostream>

int& findMax(int& a, int& b) {
    return (a > b) ? a : b;  // Return reference to the larger value
}

int main() {
    int x = 5, y = 10;
    int& max = findMax(x, y);
    max = 15;  // Modify the larger value
    std::cout << "x: " << x << ", y: " << y << std::endl;  // Output: x: 15, y: 10
    return 0;
}
