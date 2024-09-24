#include <iostream>

void process(const int& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    // const int& ref = *nullptr;  // Error: dereferencing a null pointer

    return 0;
}
