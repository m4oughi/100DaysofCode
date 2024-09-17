#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    swap(x, y);
    std::cout << "After swap, x: " << x << ", y: " << y << std::endl;  // Values of x and y are swapped
    return 0;
}
