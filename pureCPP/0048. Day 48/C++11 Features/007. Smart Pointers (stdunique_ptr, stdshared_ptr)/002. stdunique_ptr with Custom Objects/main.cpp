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
    std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>(20);
    ptr->show();

    return 0;
}
