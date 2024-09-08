#include <iostream>
#include <type_traits>

template <int N>
class MyClass {
    // Enable if N is greater than 0
    template <typename T = std::enable_if_t<(N > 0)>>
    void print() const {
        std::cout << "Value: " << N << std::endl; // Prints N if condition is true
    }
public:
    void printValue() const {
        print(); // Calls the print function
    }
};

int main() {
    MyClass<10> obj;
    obj.printValue(); // Prints "Value: 10"
}
