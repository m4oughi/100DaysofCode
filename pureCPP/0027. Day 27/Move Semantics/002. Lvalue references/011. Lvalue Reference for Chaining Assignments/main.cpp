#include <iostream>

int main() {
    int a = 5, b = 10, c = 15;
    int &ref = (a = b = c);  // ref binds to Lvalue result of assignments
    std::cout << ref;  // Prints 15

    return 0;
}