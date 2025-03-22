#include <iostream>
#include <vector>
#include <any>

int main() {
    std::vector<std::any> values = {42, 3.14, std::string("Hello")};

    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            std::cout << "Integer: " << std::any_cast<int>(val) << '\n';
        } else if (val.type() == typeid(double)) {
            std::cout << "Double: " << std::any_cast<double>(val) << '\n';
        } else if (val.type() == typeid(std::string)) {
            std::cout << "String: " << std::any_cast<std::string>(val) << '\n';
        }
    }

    return 0;
}
