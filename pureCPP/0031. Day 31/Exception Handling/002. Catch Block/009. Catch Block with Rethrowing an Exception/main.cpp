#include <iostream>

void process() {
    try {
        throw 404;
    } catch (int e) {
        std::cout << "Caught in process function: " << e << std::endl;
        throw;  // Rethrowing the exception
    }
}

int main() {
    try {
        process();
    } catch (int e) {
        std::cout << "Caught again in main: " << e << std::endl;
    }
    return 0;
}
