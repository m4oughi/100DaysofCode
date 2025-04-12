#include <iostream>

enum class Level {
    Beginner,
    Intermediate,
    Advanced,
    Count
};

int main() {
    for (int i = 0; i < static_cast<int>(Level::Count); ++i) {
        Level lvl = static_cast<Level>(i);
        std::cout << "Level value: " << i << "\n";
    }
}
