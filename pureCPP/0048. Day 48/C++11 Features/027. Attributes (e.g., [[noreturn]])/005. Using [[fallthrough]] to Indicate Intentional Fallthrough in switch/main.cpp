#include <iostream>

void checkNumber(int num) {
    switch (num) {
        case 1:
            std::cout << "One" << std::endl;
            [[fallthrough]]; // Explicitly states fallthrough is intentional
        case 2:
            std::cout << "Two" << std::endl;
            break;
        default:
            std::cout << "Other" << std::endl;
    }
}

int main() {
    checkNumber(1); // Outputs both "One" and "Two"
    return 0;
}
