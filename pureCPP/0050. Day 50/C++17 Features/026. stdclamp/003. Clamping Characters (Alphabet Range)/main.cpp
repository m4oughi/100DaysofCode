#include <iostream>
#include <algorithm>

int main() {
    char letter = 'z';
    char minChar = 'a', maxChar = 'm';

    char clampedChar = std::clamp(letter, minChar, maxChar);
    std::cout << "Clamped Letter: " << clampedChar << "\n"; // Output: 'm'

    return 0;
}
