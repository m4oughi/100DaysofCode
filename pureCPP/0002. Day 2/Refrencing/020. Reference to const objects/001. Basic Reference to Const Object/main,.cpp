#include <iostream>

int main() {
    const int num = 42;  // const object
    const int& ref = num;  // Reference to const object

    std::cout << "Value: " << ref << std::endl;  // Output: 42

    return 0;
}
