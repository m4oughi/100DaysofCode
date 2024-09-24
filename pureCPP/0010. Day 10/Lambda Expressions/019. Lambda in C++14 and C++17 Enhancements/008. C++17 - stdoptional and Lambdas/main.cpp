#include <iostream>
#include <optional>

int main() {
    std::optional<int> maybeValue = 10;
    auto processValue = [](std::optional<int> value) {
        if (value) {
            std::cout << "Value: " << *value << std::endl;
        } else {
            std::cout << "No value" << std::endl;
        }
    };

    processValue(maybeValue);  // Outputs: Value: 10
    maybeValue.reset();
    processValue(maybeValue);  // Outputs: No value

    return 0;
}
