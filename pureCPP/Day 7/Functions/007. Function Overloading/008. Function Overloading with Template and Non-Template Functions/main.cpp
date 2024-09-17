#include <iostream>

// Template function
template <typename T>
void display(T value) {
    std::cout << "Template value: " << value << std::endl;
}

// Non-template function
void display(int value) {
    std::cout << "Non-template integer: " << value << std::endl;
}

int main() {
    display(10);               // Calls non-template version
    display(3.14);             // Calls template version
    return 0;
}
