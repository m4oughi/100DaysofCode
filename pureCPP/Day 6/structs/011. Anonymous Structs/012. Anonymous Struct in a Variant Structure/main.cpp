#include <iostream>
#include <variant>

struct ComplexData {
    std::variant<int, double, std::string> value;

    struct {
        int id;
        std::string description;
    };
};

int main() {
    ComplexData cd;
    cd.value = 42;
    cd.id = 1;
    cd.description = "Example of anonymous struct in variant";

    std::cout << "ID: " << cd.id << ", Description: " << cd.description << std::endl;
    std::cout << "Value: " << std::get<int>(cd.value) << std::endl;
}
