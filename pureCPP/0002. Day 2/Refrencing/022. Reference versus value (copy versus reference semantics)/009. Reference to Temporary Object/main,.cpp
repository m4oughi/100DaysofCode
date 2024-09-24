#include <iostream>

const int& createTemporary() {
    return 42;  // Return reference to temporary object
}

int main() {
    const int& ref = createTemporary();  // Legal but risky
    std::cout << "Temporary value: " << ref << std::endl;  // Output: 42

    return 0;
}
