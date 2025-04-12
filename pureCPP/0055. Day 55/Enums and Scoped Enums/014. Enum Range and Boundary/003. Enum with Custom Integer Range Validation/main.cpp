#include <iostream>

enum class Season {
    Spring = 1,
    Summer = 2,
    Autumn = 3,
    Winter = 4
};

bool isValidSeason(int value) {
    return value >= static_cast<int>(Season::Spring) &&
           value <= static_cast<int>(Season::Winter);
}

int main() {
    std::cout << "Is 3 valid? " << isValidSeason(3) << "\n";
    std::cout << "Is 5 valid? " << isValidSeason(5) << "\n";
}
