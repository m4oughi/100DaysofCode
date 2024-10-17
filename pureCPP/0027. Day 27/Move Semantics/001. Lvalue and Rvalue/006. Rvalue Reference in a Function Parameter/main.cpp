#include <iostream>

void setValue(int &&r) {
    std::cout << "Rvalue reference: " << r << std::endl;
}

int main() {
    setValue(10);  // Passing Rvalue to the function

    return 0;
}