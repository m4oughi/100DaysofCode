#include <iostream>

int getNumber() {
    return 2;
}

int main() {
    switch (int num = getNumber(); num) {  // Declare and initialize num inside switch
        case 1:
            std::cout << "One\n";
            break;
        case 2:
            std::cout << "Two\n";
            break;
        default:
            std::cout << "Unknown\n";
    }
    return 0;
}
