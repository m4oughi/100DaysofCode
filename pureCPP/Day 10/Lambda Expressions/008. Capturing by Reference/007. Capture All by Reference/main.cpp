#include <iostream>

int main() {
    int x = 5, y = 10, z = 15;
    auto modifyAll = [&]() {
        x += 5;
        y += 10;
        z += 15;
    };

    modifyAll();
    std::cout << "Modified x: " << x << ", y: " << y << ", z: " << z << std::endl; // Outputs: Modified x: 10, y: 20, z: 30
    return 0;
}
