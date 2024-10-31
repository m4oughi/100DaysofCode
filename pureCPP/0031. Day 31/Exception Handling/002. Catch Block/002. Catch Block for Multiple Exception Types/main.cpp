#include <iostream>

int main() {
    try {
        throw 3.14;  // Throwing a double
    } catch (int e) {
        std::cout << "Caught integer exception: " << e << std::endl;
    } catch (double e) {
        std::cout << "Caught double exception: " << e << std::endl;
    }
    return 0;
}
