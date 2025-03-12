#include <iostream>

int main() {
    int x = 10;

    auto modifyX = [&x]() { x *= 2; };

    modifyX();
    std::cout << "Modified x: " << x << std::endl;

    return 0;
}
