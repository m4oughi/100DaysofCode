#include <iostream>

int main() {
    const int &ref = 100;  // Binds to the temporary value 100
    std::cout << ref << std::endl;  // Output: 100
    // ref = 200;  // Error: Cannot modify a const reference

    return 0;
}