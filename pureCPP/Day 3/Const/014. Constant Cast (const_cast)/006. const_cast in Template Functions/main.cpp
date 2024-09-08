#include <iostream>

template <typename T>
void modifyElement(const T& elem) {
    T& nonConstElem = const_cast<T&>(elem); // Removing constness
    nonConstElem = T(); // Assigning default value (e.g., 0 for int)
}

int main() {
    int num = 42;
    modifyElement(num);
    std::cout << "num: " << num << std::endl; // Prints 0
}
