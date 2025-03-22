#include <iostream>
#include <optional>

std::optional<std::string> getName(bool valid) {
    if (valid) return "Alice";
    return std::nullopt;
}

int main() {
    std::optional<std::string> name = getName(false);

    if (name.has_value()) {
        std::cout << "Name: " << name.value() << '\n';
    } else {
        std::cout << "No name available\n";
    }

    return 0;
}
