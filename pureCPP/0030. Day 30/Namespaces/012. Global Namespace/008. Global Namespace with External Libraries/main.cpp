#include <iostream>
#include <string>

int main() {
    std::string message = "Hello, World!";  // std::string from global namespace
    std::cout << message << std::endl;      // std::cout is also part of the global namespace
    return 0;
}
