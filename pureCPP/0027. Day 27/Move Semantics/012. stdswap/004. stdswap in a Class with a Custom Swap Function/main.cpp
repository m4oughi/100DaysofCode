#include <iostream>
#include <utility>

class MyClass {
    int* data;
public:
    MyClass(int value) : data(new int(value)) {}
    
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
    }
    
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }
    
    ~MyClass() { delete data; }

    void swap(MyClass& other) noexcept {
        std::swap(data, other.data);  // Using std::swap for member swapping
    }

    int getValue() const { return data ? *data : 0; }
};

int main() {
    MyClass obj1(30), obj2(40);
    
    std::cout << "Before custom swap: obj1 = " << obj1.getValue() << ", obj2 = " << obj2.getValue() << std::endl;
    
    obj1.swap(obj2);  // Using custom swap member function
    
    std::cout << "After custom swap: obj1 = " << obj1.getValue() << ", obj2 = " << obj2.getValue() << std::endl;
}
