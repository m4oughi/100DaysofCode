#include <iostream>

void modifyReference(int& value) {
    value = 100;  // Modify the original variable
}

int main() {
    int num = 50;
    modifyReference(num);  // Pass by reference
    std::cout << "Original value: " << num << std::endl;  // Output: 100

    return 0;
}
