#include <iostream>

void checkNumber(int n) {
    if (n == 1) [[likely]] {  
        std::cout << "Number is most likely 1\n";
    } else {
        std::cout << "Number is something else\n";
    }
}

int main() {
    checkNumber(1);  // Optimized for this condition
    checkNumber(42); // Less frequent case
}
