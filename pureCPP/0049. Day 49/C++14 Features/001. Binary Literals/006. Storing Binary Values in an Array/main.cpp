#include <iostream>

int main() {
    int binaryNumbers[] = {0b0001, 0b0010, 0b0100, 0b1000};

    for (int i = 0; i < 4; ++i) {
        std::cout << "Binary value at index " << i << ": " << binaryNumbers[i] << std::endl;
    }

    return 0;
}
