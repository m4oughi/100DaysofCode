#include <iostream>

void greet() { std::cout << "Hello! "; }
void farewell() { std::cout << "Goodbye! "; }

int main() {
    void (*functions[])() = {greet, farewell};

    for (auto func : functions) { // `auto` deduces function pointer type
        func();
    }

    return 0;
}
