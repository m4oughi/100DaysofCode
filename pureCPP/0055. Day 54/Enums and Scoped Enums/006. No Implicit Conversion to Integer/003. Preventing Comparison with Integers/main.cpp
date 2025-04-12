#include <iostream>

enum class Mode { Read, Write };

int main() {
    Mode m = Mode::Read;

    // if (m == 0) {} // ❌ Invalid: Cannot compare enum class with int
    if (static_cast<int>(m) == 0) { // ✅ Must cast
        std::cout << "Mode is Read\n";
    }
}
