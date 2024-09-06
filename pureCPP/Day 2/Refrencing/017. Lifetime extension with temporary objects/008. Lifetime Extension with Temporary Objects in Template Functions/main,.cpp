#include <iostream>

template<typename T>
void display(const T& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    display(42);            // Temporary int
    display(std::string("Temporary"));  // Temporary std::string

    return 0;
}
