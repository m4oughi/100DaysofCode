#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);  // Swap x and y
    std::cout << "x: " << x << ", y: " << y << std::endl;  // Output: x: 10, y: 5

    return 0;
}