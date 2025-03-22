#include <iostream>
#include <algorithm>

int getPlayerHealth(int health) {
    return std::clamp(health, 0, 100); // Health is between 0 and 100
}

int main() {
    std::cout << "Player Health (150): " << getPlayerHealth(150) << "\n"; // Output: 100
    std::cout << "Player Health (-20): " << getPlayerHealth(-20) << "\n"; // Output: 0
    std::cout << "Player Health (75): " << getPlayerHealth(75) << "\n";   // Output: 75

    return 0;
}
