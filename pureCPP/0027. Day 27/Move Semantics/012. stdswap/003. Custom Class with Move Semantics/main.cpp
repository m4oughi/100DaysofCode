#include <iostream>
#include <utility>

class MyClass {
    int* data;
public:
    MyClass(int value) : data(new int(value)) {}
    
    // Move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
    }
    
    // Move assignment operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }
    
    ~MyClass() { delete data; }
    
    int getValue() const { return data ? *data : 0; }
};

int main() {
    MyClass obj1(10), obj2(20);
    
    std::cout << "Before swap: obj1 = " << obj1.getValue() << ", obj2 = " << obj2.getValue() << std::endl;
    
    std::swap(obj1, obj2);
    
    std::cout << "After swap: obj1 = " << obj1.getValue() << ", obj2 = " << obj2.getValue() << std::endl;
}
