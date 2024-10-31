#include <iostream>

int main() {
    try {
        try {
            throw "Nested Exception";
        } catch (const char* msg) {
            std::cout << "Caught in nested try-catch: " << msg << std::endl;
            throw;  // Rethrowing the exception
        }
    } catch (const char* msg) {
        std::cout << "Caught again in outer try-catch: " << msg << std::endl;
    }
    return 0;
}
