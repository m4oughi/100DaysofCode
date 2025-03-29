#include <iostream>

int main() {
    auto make_multiplier = []<typename T>(T factor) {
        return [factor](T value) { return value * factor; };
    };

    auto double_value = make_multiplier(2);
    std::cout << "5 * 2 = " << double_value(5) << "\n";
}
