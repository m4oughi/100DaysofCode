#include <iostream>

class MyClass {
public:
    static const int arr[3]; // Static constant array
};

const int MyClass::arr[] = {101, 102, 103};

int main() {
    for (int i : MyClass::arr) {
        std::cout << i << " "; // Prints 101 102 103
    }
}
