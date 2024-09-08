#include <iostream>

void handle(int* ptr) {
    std::cout << "Non-const pointer" << std::endl;
}

void handle(const int* ptr) {
    std::cout << "Const pointer" << std::endl;
}

int main() {
    int a = 15;
    const int b = 25;

    handle(&a); // Calls handle(int*)
    handle(&b); // Calls handle(const int*)
}
