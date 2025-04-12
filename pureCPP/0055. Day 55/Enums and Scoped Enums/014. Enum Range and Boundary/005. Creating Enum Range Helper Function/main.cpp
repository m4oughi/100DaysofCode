#include <iostream>
#include <vector>

enum class Color {
    Red,
    Green,
    Blue,
    Count
};

std::vector<Color> getAllColors() {
    std::vector<Color> result;
    for (int i = 0; i < static_cast<int>(Color::Count); ++i)
        result.push_back(static_cast<Color>(i));
    return result;
}

int main() {
    for (Color c : getAllColors()) {
        std::cout << "Color value: " << static_cast<int>(c) << "\n";
    }
}
