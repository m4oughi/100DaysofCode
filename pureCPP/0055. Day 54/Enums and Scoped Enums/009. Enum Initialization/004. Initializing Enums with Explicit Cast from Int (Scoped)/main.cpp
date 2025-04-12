#include <iostream>

enum class Mode { Off = 0, On = 1 };

int main() {
    int input = 1;
    Mode m = static_cast<Mode>(input);  // Manual cast required
    std::cout << "Mode: " << static_cast<int>(m) << std::endl;
}
