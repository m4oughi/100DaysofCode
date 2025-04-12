#include <iostream>

enum class Difficulty {
    Easy = 1,
    Medium = 2,
    Hard = 3,
    Min = Easy,
    Max = Hard
};

int main() {
    for (int i = static_cast<int>(Difficulty::Min); i <= static_cast<int>(Difficulty::Max); ++i) {
        std::cout << "Difficulty level: " << i << "\n";
    }
}
