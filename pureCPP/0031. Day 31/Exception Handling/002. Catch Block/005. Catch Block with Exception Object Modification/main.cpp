#include <iostream>
#include <string>

int main() {
    try {
        throw std::string("Initial exception message");
    } catch (std::string& e) {  // Catching by non-const reference
        e = "Modified exception message";
        std::cout << "Caught and modified exception: " << e << std::endl;
    }
    return 0;
}
