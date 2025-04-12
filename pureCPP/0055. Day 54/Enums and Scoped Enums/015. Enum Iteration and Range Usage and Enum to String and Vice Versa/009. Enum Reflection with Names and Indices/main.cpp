#include <iostream>
#include "magic_enum.hpp"

enum class Language { Cpp, Python, Rust };

int main() {
    std::cout << "Available Languages:\n";
    for (auto lang : magic_enum::enum_values<Language>()) {
        std::cout << static_cast<int>(lang) << ": " << magic_enum::enum_name(lang) << "\n";
    }
}
