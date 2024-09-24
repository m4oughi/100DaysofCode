#include <iostream>
#include <utility>  // For std::forward

template<typename T>
void process(T&& value) {
    // Forward value to another function
    handle(std::forward<T>(value));
}

void handle(int& value) {
    std::cout << "lvalue reference: " << value << std::endl;
}

void handle(const int& value) {
    std::cout << "const lvalue reference: " << value << std::endl;
}

void handle(int&& value) {
    std::cout << "rvalue reference: " << value << std::endl;
}

int main() {
    int x = 10;
    process(x);        // Calls handle(int&)

    process(20);       // Calls handle(int&&)

    return 0;
}
