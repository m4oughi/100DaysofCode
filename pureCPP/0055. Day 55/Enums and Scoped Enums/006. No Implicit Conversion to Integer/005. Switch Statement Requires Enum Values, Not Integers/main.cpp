#include <iostream>

enum class Light { Red = 1, Yellow = 2, Green = 3 };

int main() {
    Light l = Light::Green;

    switch (l) { // ✅ Works in modern compilers (C++11+)
        case Light::Red: std::cout << "Stop!\n"; break;
        case Light::Yellow: std::cout << "Caution!\n"; break;
        case Light::Green: std::cout << "Go!\n"; break;
        // case 3: // ❌ Not allowed unless casted
    }
}
