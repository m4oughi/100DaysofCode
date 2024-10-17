#include <iostream>
#include <utility>

class MyClass {
    int* data;
public:
    MyClass(int value) : data(new int(value)) {}
    
    // Move constructor may throw
    MyClass(MyClass&& other) : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor (may throw)\n";
    }

    // Copy constructor is noexcept
    MyClass(const MyClass& other) noexcept : data(new int(*other.data)) {
        std::cout << "Copy constructor (noexcept)\n";
    }
    
    ~MyClass() { delete data; }

    void showData() const {
        std::cout << "Data: " << (data ? *data : 0) << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    std::cout << "Before move_if_noexcept:\n";
    obj1.showData();
    
    MyClass obj2 = std::move_if_noexcept(obj1);  // Will copy since move may throw
    
    std::cout << "After move_if_noexcept:\n";
    obj2.showData();
}
