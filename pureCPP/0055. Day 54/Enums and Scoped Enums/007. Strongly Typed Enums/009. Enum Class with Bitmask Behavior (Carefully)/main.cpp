#include <iostream>

enum class Flags : unsigned int {
    None = 0,
    A = 1 << 0,
    B = 1 << 1,
    C = 1 << 2
};

inline Flags operator|(Flags a, Flags b) {
    return static_cast<Flags>(
        static_cast<unsigned int>(a) | static_cast<unsigned int>(b)
    );
}

int main() {
    Flags combo = Flags::A | Flags::C;
    std::cout << "Combined Flags: " << static_cast<unsigned int>(combo) << "\n";
}
