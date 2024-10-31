#include <iostream>

class NonStandardException {};

void triggerError() {
    throw NonStandardException();  // Throwing a non-standard exception
}

int main() {
    try {
        triggerError();
    } catch (const std::exception& e) {
        std::cout << "Caught a standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught a non-standard exception" << std::endl;
    }
    return 0;
}
