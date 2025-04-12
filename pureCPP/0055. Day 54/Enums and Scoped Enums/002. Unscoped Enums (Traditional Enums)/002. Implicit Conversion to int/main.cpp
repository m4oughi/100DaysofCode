#include <iostream>

enum Size { Small = 1, Medium = 2, Large = 3 };

int main() {
    Size shirt = Large;
    int val = shirt; // Implicit conversion
    std::cout << "Shirt size value: " << val << std::endl;
}
