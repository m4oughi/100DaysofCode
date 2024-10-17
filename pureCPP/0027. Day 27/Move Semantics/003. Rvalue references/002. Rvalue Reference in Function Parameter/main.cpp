#include <iostream>

void setValue(int &&rref) {
    std::cout << "Rvalue reference: " << rref << std::endl;
}

int main() {
    setValue(5);  // Passes an Rvalue to the function
    return 0;
}
