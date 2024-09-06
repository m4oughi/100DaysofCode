#include <iostream>
#include <string>

int main() {
    auto lambda = [temp = std::string("Temporary Lambda")]() {
        std::cout << "Lambda captured: " << temp << std::endl;
    };

    lambda();  // Temporary std::string extended for lambda's lifetime

    return 0;
}
