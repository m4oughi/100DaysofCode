#include <iostream>
#include <memory>

class MyClass {
public:
    std::shared_ptr<int> data;
    MyClass(std::shared_ptr<int> ptr) : data(ptr) {
        std::cout << "MyClass constructor" << std::endl;
    }
    void show() {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    std::shared_ptr<int> ptr = std::make_shared<int>(90);
    MyClass obj(ptr); // shared ownership between main and MyClass

    std::cout << "Use count: " << ptr.use_count() << std::endl; // reference count is 2
    obj.show();
    return 0;
}
