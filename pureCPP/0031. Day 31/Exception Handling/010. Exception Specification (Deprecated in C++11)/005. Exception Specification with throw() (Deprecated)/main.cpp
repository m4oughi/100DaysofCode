#include <iostream>

void noThrow() throw() {
    std::cout << "This function cannot throw any exceptions." << std::endl;
}

int main() {
    try {
        noThrow();
    } catch (...) {
        std::cout << "This will never be executed since noThrow cannot throw exceptions." << std::endl;
    }
    return 0;
}
