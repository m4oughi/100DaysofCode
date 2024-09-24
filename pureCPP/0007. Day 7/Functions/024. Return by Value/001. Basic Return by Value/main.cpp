#include <iostream>

int square(int num) {
    return num * num;  // Return by value
}

int main() {
    int result = square(5);
    std::cout << "Square of 5 is " << result << std::endl;  // Output: Square of 5 is 25
    return 0;
}
