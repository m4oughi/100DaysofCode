#include <iostream>

int main() {
    try {
        throw 'A';  // Throwing a character
    } catch (int e) {
        std::cout << "Caught an integer: " << e << std::endl;
    } catch (char e) {
        std::cout << "Caught a character: " << e << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
