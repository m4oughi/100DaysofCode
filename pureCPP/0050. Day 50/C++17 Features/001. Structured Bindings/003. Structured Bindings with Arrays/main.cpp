#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};

    auto [x, y, z] = arr;  // Structured binding with arrays

    std::cout << "x: " << x << ", y: " << y << ", z: " << z << '\n';
    return 0;
}
