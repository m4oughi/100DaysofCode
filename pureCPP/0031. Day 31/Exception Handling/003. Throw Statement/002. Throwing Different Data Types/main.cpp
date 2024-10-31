#include <iostream>

int main() {
    try {
        throw 3.14;  // Throwing a double
    } catch (double e) {
        std::cout << "Caught double exception: " << e << std::endl;
    }

    try {
        throw "String exception";  // Throwing a string literal
    } catch (const char* e) {
        std::cout << "Caught string exception: " << e << std::endl;
    }
    
    return 0;
}
