#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int v) : value(v) { std::cout << "Constructor\n"; }
    ~MyClass() { std::cout << "Destructor\n"; }
    void show() { std::cout << "Value: " << value << std::endl; }
private:
    int value;
};

int main() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(30);
    std::shared_ptr<MyClass> ptr2 = ptr1; // Shared ownership

    ptr1->show();
    ptr2->show();

    std::cout << "Reference Count: " << ptr1.use_count() << std::endl;

    return 0;
}
