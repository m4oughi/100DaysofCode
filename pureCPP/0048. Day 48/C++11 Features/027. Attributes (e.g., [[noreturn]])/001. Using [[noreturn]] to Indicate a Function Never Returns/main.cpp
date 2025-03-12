#include <iostream>
#include <cstdlib> // for std::exit

[[noreturn]] void fatalError(const char* message) {
    std::cerr << "Fatal error: " << message << std::endl;
    std::exit(EXIT_FAILURE);
}

int main() {
    fatalError("Unexpected failure");
    return 0; // This will never be executed
}
