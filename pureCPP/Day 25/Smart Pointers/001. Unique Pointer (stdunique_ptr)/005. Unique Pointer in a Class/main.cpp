#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int val) : value(val) {
        std::cout << "MyClass Constructor: " << value << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor: " << value << std::endl;
    }
    void showValue() const {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    std::unique_ptr<MyClass> obj = std::make_unique<MyClass>(100); // Object creation
    obj->showValue();

    return 0;
}
