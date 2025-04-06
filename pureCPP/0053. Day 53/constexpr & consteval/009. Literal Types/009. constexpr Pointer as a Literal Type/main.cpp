#include <iostream>

constexpr int value = 10;
constexpr const int* ptr = &value; 

int main() {
    std::cout << "Pointer Value: " << *ptr << '\n';
    return 0;
}
