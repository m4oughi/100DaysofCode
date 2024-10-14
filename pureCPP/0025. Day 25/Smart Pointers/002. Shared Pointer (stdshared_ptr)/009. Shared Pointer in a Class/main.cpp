#include <iostream>
#include <memory>

class MyClass {
public:
    std::shared_ptr<int> data;
    
    MyClass(int val) : data(std::make_shared<int>(val)) {
        std::cout << "MyClass Constructor, value: " << *data << std::endl;
    }
    
    ~MyClass() {
        std::cout << "MyClass Destructor" << std::endl;
    }
};

int main() {
    MyClass obj1(50);  // obj1 owns a shared_ptr
    MyClass obj2(100); // obj2 owns a separate shared_ptr

    obj2 = obj1;  // Now obj2 shares ownership with obj1
    std::cout << "obj1 and obj2 share the value: " << *obj1.data << std::endl;
    
    return 0;
}
