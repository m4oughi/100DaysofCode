#include <iostream>

// Function accepting a lambda
void operateOnNumbers(int x, int y, auto operation) {
    std::cout << "Result: " << operation(x, y) << std::endl;
}

int main() {
    operateOnNumbers(4, 5, [](int a, int b) { return a + b; });  // Lambda for addition
    operateOnNumbers(6, 2, [](int a, int b) { return a * b; });  // Lambda for multiplication
    return 0;
}
