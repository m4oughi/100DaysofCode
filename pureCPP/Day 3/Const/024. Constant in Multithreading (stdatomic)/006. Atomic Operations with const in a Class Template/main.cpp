#include <iostream>
#include <atomic>
#include <thread>

template <typename T>
class MyTemplateClass {
public:
    MyTemplateClass(T val) : atomicValue(val) {}

    void printValue() const {
        std::cout << "Atomic value: " << atomicValue.load() << std::endl;
    }

private:
    mutable std::atomic<T> atomicValue; // Mutable atomic member variable
};

int main() {
    MyTemplateClass<int> obj(40);
    obj.printValue(); // Prints 40

    return 0;
}
