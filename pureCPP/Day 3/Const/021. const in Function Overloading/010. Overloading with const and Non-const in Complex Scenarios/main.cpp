#include <iostream>

void process(int& value) {
    std::cout << "Non-const reference" << std::endl;
}

void process(const int& value) {
    std::cout << "Const reference" << std::endl;
}

void process(int* value) {
    std::cout << "Non-const pointer" << std::endl;
}

void process(const int* value) {
    std::cout << "Const pointer" << std::endl;
}

void process(const int& value, bool flag) {
    std::cout << "Const reference with flag" << std::endl;
}

void process(int& value, bool flag) {
    std::cout << "Non-const reference with flag" << std::endl;
}

int main() {
    int a = 70;
    const int b = 80;

    process(a);            // Calls process(int&)
    process(b);            // Calls process(const int&)
    process(&a);           // Calls process(int*)
    process(&b);           // Calls process(const int*)
    process(b, true);      // Calls process(const int&, bool)
    process(a, true);      // Calls process(int&, bool)
}
