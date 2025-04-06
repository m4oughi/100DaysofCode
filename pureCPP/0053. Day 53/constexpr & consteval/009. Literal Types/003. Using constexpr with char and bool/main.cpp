#include <iostream>

constexpr char getLetter() {
    return 'A';
}

constexpr bool isEven(int x) {
    return (x % 2 == 0);
}

int main() {
    constexpr char letter = getLetter();
    constexpr bool even = isEven(10);

    std::cout << "Letter: " << letter << "\n";
    std::cout << "Is 10 even? " << (even ? "Yes" : "No") << "\n";

    return 0;
}
