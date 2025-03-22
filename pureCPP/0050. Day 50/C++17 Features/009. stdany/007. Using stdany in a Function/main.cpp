#include <iostream>
#include <any>

void printValue(const std::any& value) {
    if (value.type() == typeid(int)) {
        std::cout << "Integer: " << std::any_cast<int>(value) << '\n';
    } else if (value.type() == typeid(std::string)) {
        std::cout << "String: " << std::any_cast<std::string>(value) << '\n';
    } else {
        std::cout << "Unknown type.\n";
    }
}

int main() {
    printValue(10);
    printValue(std::string("Hello"));

    return 0;
}
