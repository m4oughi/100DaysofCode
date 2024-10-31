#include <iostream>

void process() {
    try {
        throw 404;  // Throwing an integer exception
    } catch (int e) {
        std::cout << "Caught exception in process: " << e << std::endl;
        throw;  // Rethrowing the exception
    }
}

int main() {
    try {
        process();  // Rethrown exception will be caught here
    } catch (int e) {
        std::cout << "Caught rethrown exception in main: " << e << std::endl;
    }
    return 0;
}
