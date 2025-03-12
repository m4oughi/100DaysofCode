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
    auto deleter = [](MyClass* ptr) {
        std::cout << "Custom Deleter Called\n";
        delete ptr;
    };

    std::shared_ptr<MyClass> ptr(new MyClass(40), deleter);
    ptr->show();

    return 0;
}
