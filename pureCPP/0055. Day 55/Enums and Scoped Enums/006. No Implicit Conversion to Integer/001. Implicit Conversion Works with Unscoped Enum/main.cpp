#include <iostream>

enum LegacyLevel { Low, Medium, High };

int main() {
    LegacyLevel lvl = High;
    int levelValue = lvl; // ✅ Implicit conversion allowed
    std::cout << "Legacy Level: " << levelValue << std::endl;
}
