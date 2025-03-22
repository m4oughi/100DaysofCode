#include <iostream>
#include <any>
#include <string>

int main() {
    std::any data;

    data = 3.14;  // Store a double
    std::cout << "Double: " << std::any_cast<double>(data) << '\n';

    data = std::string("Hello");
    std::cout << "String: " << std::any_cast<std::string>(data) << '\n';

    return 0;
}
