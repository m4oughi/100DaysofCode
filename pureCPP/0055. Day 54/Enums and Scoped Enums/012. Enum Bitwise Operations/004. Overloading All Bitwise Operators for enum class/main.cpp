#include <iostream>

enum class Option : uint8_t {
    None = 0,
    Alpha = 1 << 0,
    Beta  = 1 << 1,
    Gamma = 1 << 2
};

// Enable bitwise operations
inline Option operator|(Option a, Option b) {
    return static_cast<Option>(
        static_cast<uint8_t>(a) | static_cast<uint8_t>(b));
}

inline Option operator&(Option a, Option b) {
    return static_cast<Option>(
        static_cast<uint8_t>(a) & static_cast<uint8_t>(b));
}

inline Option operator~(Option a) {
    return static_cast<Option>(~static_cast<uint8_t>(a));
}

int main() {
    Option o = Option::Alpha | Option::Gamma;

    if ((o & Option::Gamma) != Option::None) {
        std::cout << "Gamma is set.\n";
    }

    o = ~o;
    std::cout << "After negation, flags flipped.\n";
}
