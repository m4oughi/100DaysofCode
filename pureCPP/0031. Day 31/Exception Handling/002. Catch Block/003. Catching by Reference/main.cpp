#include <iostream>
#include <string>

int main() {
    try {
        throw std::string("A string exception");
    } catch (const std::string& e) {  // Catching by reference
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
