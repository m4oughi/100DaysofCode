#include <iostream>
#include <variant>

using Data = std::variant<std::monostate, int, std::string>;

void process(const Data& data) {
    std::visit([](const auto& value) {
        if constexpr (std::is_same_v<std::decay_t<decltype(value)>, std::monostate>) {
            std::cout << "No value set\n";
        } else {
            std::cout << "Value: " << value << '\n';
        }
    }, data);
}

int main() {
    Data data;
    process(data);  // No value set

    data = 42;
    process(data);  // Value: 42

    data = "Hello";
    process(data);  // Value: Hello

    return 0;
}
