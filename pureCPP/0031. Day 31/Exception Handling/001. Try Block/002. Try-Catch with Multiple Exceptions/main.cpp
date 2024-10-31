#include <iostream>

int main() {
    try {
        throw 'A';  // Throwing a character
    } catch (int e) {
        std::cout << "Caught integer exception: " << e << std::endl;
    } catch (char e) {
        std::cout << "Caught char exception: " << e << std::endl;
    }
    return 0;
}
