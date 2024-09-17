#include <iostream>

template <typename T>
void print(T value) {
    std::cout << "Value: " << value << std::endl;
}

// Specialization for char*
template <>
void print(const char* value) {
    std::cout << "String: " << value << std::endl;
}

int main() {
    print(5);          // Calls generic template
    print("Hello!");    // Calls specialized template for const char*

    return 0;
}
