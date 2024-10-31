#include <iostream>
#include <stdexcept>

void mayThrow() throw(std::logic_error) {
    throw std::runtime_error("This function is not allowed to throw runtime_error!");
}

int main() {
    try {
        mayThrow();
    } catch (...) {
        std::cout << "Caught an unexpected exception!" << std::endl;
    }
    return 0;
}
