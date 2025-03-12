#include <iostream>

int main() {
    int num = 42;
    auto ptr = &num;   // int* (pointer to int)
    auto& ref = num;   // int& (reference to int)

    *ptr = 100;  // Modifies num

    std::cout << "num: " << num << ", ref: " << ref << std::endl;
    return 0;
}
