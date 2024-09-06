#include <iostream>

void printValue(int& value) {
    std::cout << "L-value reference: " << value << std::endl;
}

void printValue(const int& value) {
    std::cout << "Const l-value reference: " << value << std::endl;
}

void printValue(int&& value) {
    std::cout << "R-value reference: " << value << std::endl;
}

template<typename T>
void test(T&& value) {
    auto& ref = value;  // auto& deduces the reference type based on T
    printValue(ref);    // Calls the appropriate overload based on ref's type
}

int main() {
    int x = 110;
    test(x);          // Calls l-value reference overload
    test(120);        // Calls r-value reference overload
}
