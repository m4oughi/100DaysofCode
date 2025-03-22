#include <iostream>
#include <optional>

std::optional<int> getData(bool valid) {
    return valid ? std::optional<int>(42) : std::nullopt;
}

int main() {
    if (auto data = getData(true); data.has_value()) {
        std::cout << "Valid data: " << *data << '\n';
    } else {
        std::cout << "No data available.\n";
    }
    return 0;
}
