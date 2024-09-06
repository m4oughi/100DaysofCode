#include <iostream>

class MyClass {
public:
    void print() const & {  // Can be called on const l-values
        std::cout << "Const l-value" << std::endl;
    }

    void modify() & {  // Can be called on non-const l-values
        std::cout << "Non-const l-value" << std::endl;
    }

    void transform() && {  // Can be called on r-values
        std::cout << "R-value" << std::endl;
    }
};

int main() {
    const MyClass obj1;
    obj1.print();  // Works fine

    MyClass obj2;
    obj2.modify();  // Works fine

    MyClass().transform();  // Works fine

    // MyClass().print();  // Error: print() cannot be called on a temporary object
    // obj1.modify();  // Error: modify() cannot be called on a const object
}
