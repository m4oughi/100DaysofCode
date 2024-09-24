#include <iostream>

// Inline function to swap two integers using reference parameters
inline void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 3, y = 4;
    swap(x, y);
    std::cout << "x: " << x << ", y: " << y << std::endl; // Output: x: 4, y: 3
    return 0;
}
