#include <iostream>

enum Flag {
    FlagA = 1 << 0,
    FlagB = 1 << 1,
    FlagC = 1 << 2
};

int main() {
    int flags = FlagA | FlagB;
    std::cout << "Flags before clearing B: " << flags << "\n";

    flags &= ~FlagB;  // Clear FlagB
    std::cout << "Flags after clearing B: " << flags << "\n";

    flags ^= FlagC;   // Toggle FlagC
    std::cout << "Flags after toggling C: " << flags << "\n";
}
