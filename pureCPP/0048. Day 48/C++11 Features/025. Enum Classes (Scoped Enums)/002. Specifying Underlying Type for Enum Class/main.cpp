#include <iostream>

enum class Size : char { Small = 'S', Medium = 'M', Large = 'L' };

int main() {
    Size mySize = Size::Medium;
    std::cout << "Size: " << static_cast<char>(mySize) << '\n';
    return 0;
}
