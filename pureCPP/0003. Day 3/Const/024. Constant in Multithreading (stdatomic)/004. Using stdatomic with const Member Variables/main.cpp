#include <iostream>
#include <atomic>
#include <thread>

class MyClass {
public:
    MyClass(int val) : atomicValue(val) {}

    void printValue() const {
        std::cout << "Atomic value: " << atomicValue.load() << std::endl;
    }

private:
    mutable std::atomic<int> atomicValue; // Mutable atomic member variable
};

int main() {
    MyClass obj(30);
    obj.printValue(); // Prints 30

    return 0;
}
