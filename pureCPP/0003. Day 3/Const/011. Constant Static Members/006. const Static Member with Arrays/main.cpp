#include <iostream>

class MyClass {
public:
    static const int arr[3]; // Constant static array

    void printArray() const {
        for (int i = 0; i < 3; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

const int MyClass::arr[3] = {90, 100, 110}; // Initialization of constant static array

int main() {
    MyClass obj;
    obj.printArray(); // Prints 90 100 110
    // MyClass::arr[0] = 120; // NOT allowed: modifying constant static array elements is not allowed
}
