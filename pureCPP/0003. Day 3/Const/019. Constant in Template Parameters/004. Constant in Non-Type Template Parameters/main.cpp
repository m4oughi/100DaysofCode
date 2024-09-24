#include <iostream>

template <int Size>
class Array {
public:
    void printSize() const {
        std::cout << "Size: " << Size << std::endl; // Prints the constant size
    }
};

int main() {
    Array<50> arr;
    arr.printSize(); // Prints "Size: 50"
}
