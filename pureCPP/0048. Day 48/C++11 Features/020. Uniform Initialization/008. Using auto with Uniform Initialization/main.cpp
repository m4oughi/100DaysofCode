#include <iostream>

int main() {
    auto value{42}; // Type deduced as int
    auto decimal{3.14}; // Type deduced as double

    std::cout << "value: " << value << ", decimal: " << decimal << std::endl;
    return 0;
}
