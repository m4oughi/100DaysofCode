#include <iostream>

enum class Mode { Auto, Manual, Sleep };

constexpr const char* modeToStr(Mode m) {
    switch (m) {
        case Mode::Auto: return "Auto";
        case Mode::Manual: return "Manual";
        case Mode::Sleep: return "Sleep";
    }
    return "Unknown";
}

int main() {
    constexpr Mode m = Mode::Manual;
    std::cout << "Mode: " << modeToStr(m) << "\n";
}
