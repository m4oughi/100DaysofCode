#include <iostream>
#include "magic_enum.hpp"

enum class Animal {
    Dog,
    Cat,
    Elephant,
    Tiger
};

int main() {
    for (auto a : magic_enum::enum_values<Animal>()) {
        std::cout << "Animal: " << magic_enum::enum_name(a) << "\n";
    }
}
