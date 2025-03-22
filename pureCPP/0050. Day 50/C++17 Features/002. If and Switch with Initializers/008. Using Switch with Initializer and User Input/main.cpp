#include <iostream>

int main() {
    std::cout << "Enter a number (1-3): ";
    int input;
    std::cin >> input;

    switch (int num = input; num) {
        case 1:
            std::cout << "You entered one.\n";
            break;
        case 2:
            std::cout << "You entered two.\n";
            break;
        case 3:
            std::cout << "You entered three.\n";
            break;
        default:
            std::cout << "Invalid number.\n";
    }
    return 0;
}
