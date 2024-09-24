#include <iostream>

void process(int& value) {
    std::cout << "Non-const reference: " << value << std::endl;
}

void process(const int& value) {
    std::cout << "Const reference: " << value << std::endl;
}

void process(int* value) {
    std::cout << "Non-const pointer: " << *value << std::endl;
}

void process(const int* value) {
    std::cout << "Const pointer: " << *value << std::endl;
}

int main() {
    int a = 30;
    const int b = 40;

    process(a); // Calls process(int&)
    process(b); // Calls process(const int&)
    process(&a); // Calls process(int*)
    process(&b); // Calls process(const int*)
}
