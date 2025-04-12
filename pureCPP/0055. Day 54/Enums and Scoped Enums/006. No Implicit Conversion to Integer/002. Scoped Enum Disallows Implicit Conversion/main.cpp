#include <iostream>

enum class ModernLevel { Low, Medium, High };

int main() {
    ModernLevel lvl = ModernLevel::High;
    // int value = lvl; // ❌ Error: no implicit conversion to int
    int value = static_cast<int>(lvl); // ✅ Must be explicit
    std::cout << "Modern Level: " << value << std::endl;
}
