#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<char, 5> buffer = {'A', 'B', 'C', 'D', 'E'};

    std::rotate(buffer.begin(), buffer.begin() + 2, buffer.end());

    std::cout << "Circular buffer after rotation: ";
    for (char ch : buffer) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    return 0;
}
