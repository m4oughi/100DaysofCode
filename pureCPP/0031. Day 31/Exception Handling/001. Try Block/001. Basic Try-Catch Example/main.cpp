#include <iostream>

int main() {
    try {
        throw 10;  // Throwing an integer
    } catch (int e) {
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
