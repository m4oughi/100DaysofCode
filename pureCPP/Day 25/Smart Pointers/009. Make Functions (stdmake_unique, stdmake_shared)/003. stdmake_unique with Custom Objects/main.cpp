#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int x) : x_(x) {
        std::cout << "MyClass constructor called with " << x_ << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass destructor called" << std::endl;
    }
private:
    int x_;
};

int main() {
    auto uniquePtr = std::make_unique<MyClass>(5);  // Create unique_ptr for custom class

    return 0;
}
