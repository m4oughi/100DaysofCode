#include <iostream>

enum Day { Monday, Tuesday, Wednesday };

int main() {
    Day d = Monday;  // Implicit initialization
    std::cout << "Day enum value: " << d << std::endl;
}
