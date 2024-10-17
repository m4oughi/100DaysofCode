#include <iostream>

class NonMovable {
    int value;
public:
    NonMovable(int val) : value(val) {}
    NonMovable(const NonMovable&) = delete;  // Prevent copying
    NonMovable& operator=(const NonMovable&) = delete;
    NonMovable(NonMovable&&) = delete;       // Prevent moving
    NonMovable& operator=(NonMovable&&) = delete;

    void swap(NonMovable& other) {
        std::swap(value, other.value);  // Custom swap logic
    }

    int getValue() const { return value; }
};

int main() {
    NonMovable obj1(1), obj2(2);
    
    std::cout << "Before swap: obj1 = " << obj1.getValue() << ", obj2 = " << obj2.getValue() << std::endl;
    
    obj1.swap(obj2);  // Manually swapping values for non-copyable, non-movable types
    
    std::cout << "After swap: obj1 = " << obj1.getValue() << ", obj2 = " << obj2.getValue() << std::endl;
}
