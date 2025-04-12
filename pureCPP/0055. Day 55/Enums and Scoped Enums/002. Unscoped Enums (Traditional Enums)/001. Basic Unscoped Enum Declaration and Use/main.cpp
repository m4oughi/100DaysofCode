#include <iostream>

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday };

int main() {
    Day today = Wednesday;
    if (today == Wednesday)
        std::cout << "It's Wednesday!\n";
}
