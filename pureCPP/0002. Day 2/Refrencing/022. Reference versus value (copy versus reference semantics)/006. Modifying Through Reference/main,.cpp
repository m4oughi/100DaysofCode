#include <iostream>

void increaseValue(int& value) {
    value += 10;  // Modify the original variable
}

int main() {
    int num = 50;
    increaseValue(num);  // Pass by reference
    std::cout << "Increased value: " << num << std::endl;  // Output: 60

    return 0;
}
