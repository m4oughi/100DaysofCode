#include <iostream>

extern inline void sayHello() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
    sayHello();
    return 0;
}
