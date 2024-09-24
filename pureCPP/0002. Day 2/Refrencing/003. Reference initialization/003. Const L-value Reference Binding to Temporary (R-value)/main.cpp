#include <iostream>

int main() {
    const int &ref = 100;  // ref binds to the temporary value 100
    std::cout << ref << std::endl;  // OK: prints 100, lifetime of the temporary extends

    return 0;
}