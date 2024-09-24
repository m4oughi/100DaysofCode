#include <iostream>

class MyClass {
public:
    void print() const & {  // l-value reference with const qualifier
        std::cout << "Called on const l-value" << std::endl;
    }

    void modify() & {  // l-value reference without const qualifier
        std::cout << "Called on non-const l-value" << std::endl;
    }
};

int main() {
    const MyClass obj1;
    obj1.print();  // Works fine

    MyClass obj2;
    obj2.modify();  // Works fine
}
