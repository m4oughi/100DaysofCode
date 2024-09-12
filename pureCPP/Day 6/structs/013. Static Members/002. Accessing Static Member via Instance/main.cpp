#include <iostream>

struct AccessStatic {
    static int value;
};

int AccessStatic::value = 42;

int main() {
    AccessStatic instance1, instance2;
    
    std::cout << "Instance1 Value: " << instance1.value << std::endl;
    std::cout << "Instance2 Value: " << instance2.value << std::endl;

    // Modify via one instance
    instance1.value = 100;

    std::cout << "Instance2 Value after modification: " << instance2.value << std::endl;
}
