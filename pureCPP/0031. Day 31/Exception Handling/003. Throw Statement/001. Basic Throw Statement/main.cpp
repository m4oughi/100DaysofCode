#include <iostream>

int main() {
    try {
        throw 10;  // Throwing an integer exception
    } catch (int e) {
        std::cout << "Caught integer exception: " << e << std::endl;
    }
    return 0;
}
