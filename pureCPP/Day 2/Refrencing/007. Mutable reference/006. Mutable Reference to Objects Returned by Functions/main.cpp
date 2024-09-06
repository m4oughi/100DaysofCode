#include <iostream>

int& getReference(int &value) {
    return value;  // Returns a mutable reference to the original variable
}

int main() {
    int x = 70;
    int &ref = getReference(x);  // ref refers to x
    ref = 80;  // Modifies x
    std::cout << x << std::endl;  // Output: 80

    return 0;
}