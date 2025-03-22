#include <iostream>
#include <variant>

int main() {
    std::variant<int, double, std::string> var;
    
    var = 10;
    std::cout << "Int value: " << std::get<int>(var) << "\n";

    var = "Hello";
    std::cout << "String value: " << std::get<std::string>(var) << "\n";

    return 0;
}
