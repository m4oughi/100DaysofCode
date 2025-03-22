#include <iostream>
#include <optional>
#include <variant>

using Data = std::variant<int, double, std::string>;

std::optional<Data> getData(bool returnData) {
    if (returnData) return 42;
    return std::nullopt;
}

int main() {
    std::optional<Data> data = getData(true);

    if (data) {
        std::visit([](const auto& value) {
            std::cout << "Value: " << value << '\n';
        }, *data);
    } else {
        std::cout << "No data\n";
    }

    return 0;
}
