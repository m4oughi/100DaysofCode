#include <iostream>

int main() {
    int num = 100;
    int& ref = num;

    decltype(ref) anotherRef = num; // anotherRef is int& (reference to int)

    anotherRef = 200; // Modifies num

    std::cout << "num: " << num << std::endl;
    return 0;
}
