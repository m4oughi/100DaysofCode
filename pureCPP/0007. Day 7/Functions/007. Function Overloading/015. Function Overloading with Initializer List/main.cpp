#include <iostream>
#include <initializer_list>

// Overloaded functions with initializer list
void printValues(std::initializer_list<int> values) {
    for (auto val : values) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

void printValues(int a) {
    std::cout << "Single value: " << a << std::endl;
}

int main() {
    printValues({1, 2, 3, 4});   // Calls initializer list version
    printValues(5);              // Calls single int version
    return 0;
}
