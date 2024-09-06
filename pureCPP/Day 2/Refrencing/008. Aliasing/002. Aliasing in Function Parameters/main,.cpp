#include <iostream>

void modify(int &ref1, int &ref2) {
    ref1 = 30;  // Modify the original variable through ref1
    ref2 = 40;  // Modify the original variable through ref2
}

int main() {
    int y = 50;
    modify(y, y);  // Both ref1 and ref2 alias y
    std::cout << y << std::endl;  // Output: 40 (the final modification)

    return 0;
}