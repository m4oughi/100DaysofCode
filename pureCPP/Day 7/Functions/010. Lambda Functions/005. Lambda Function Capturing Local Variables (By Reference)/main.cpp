#include <iostream>

int main() {
    int x = 10;
    auto modifyX = [&x]() { x += 5; };
    modifyX();
    std::cout << "Modified value of x: " << x << std::endl;
    return 0;
}
