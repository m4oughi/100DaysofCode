#include <iostream>

constexpr int squares[5] = {1, 4, 9, 16, 25};

constexpr int getSquare(int index) {
    return squares[index];
}

int main() {
    constexpr int sq = getSquare(3); 
    std::cout << "4th square number: " << sq << '\n';
    return 0;
}
