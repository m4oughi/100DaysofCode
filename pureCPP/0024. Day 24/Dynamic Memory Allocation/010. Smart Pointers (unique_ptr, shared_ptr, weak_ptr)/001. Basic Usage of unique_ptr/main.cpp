#include <iostream>
#include <memory> // required for smart pointers

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(10); // allocate memory
    std::cout << "Value: " << *ptr << std::endl; // dereference to get value

    return 0;
}
