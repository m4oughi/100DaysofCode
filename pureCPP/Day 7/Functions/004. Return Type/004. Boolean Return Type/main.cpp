#include <iostream>

// Function declaration with bool return type
bool isEven(int num);

int main() {
    int number = 10;
    if (isEven(number)) {  // Function call in conditional statement
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }
    return 0;
}

// Function definition with bool return type
bool isEven(int num) {
    return (num % 2 == 0);  // Returns true if even, false otherwise
}
