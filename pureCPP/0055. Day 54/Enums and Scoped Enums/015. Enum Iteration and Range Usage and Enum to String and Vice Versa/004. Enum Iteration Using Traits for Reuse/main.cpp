#include <iostream>
#include <type_traits>

enum class Color { Red, Green, Blue, Count };

template<typename E>
struct EnumTraits;

template<>
struct EnumTraits<Color> {
    static constexpr int min = 0;
    static constexpr int max = static_cast<int>(Color::Count) - 1;
};

int main() {
    for (int i = EnumTraits<Color>::min; i <= EnumTraits<Color>::max; ++i) {
        std::cout << "Color enum value: " << i << "\n";
    }
}
