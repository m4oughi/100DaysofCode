#include <iostream>

class ClassA {
public:
    static const int valueA = 10;
};

class ClassB {
public:
    static const int valueB = 20;
};

int main() {
    std::cout << "ClassA value: " << ClassA::valueA << std::endl; // Prints 10
    std::cout << "ClassB value: " << ClassB::valueB << std::endl; // Prints 20
}
