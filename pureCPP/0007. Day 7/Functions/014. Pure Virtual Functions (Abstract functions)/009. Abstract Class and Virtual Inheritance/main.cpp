#include <iostream>

class Base {
public:
    virtual void show() const = 0;  // Pure virtual function
};

class Intermediate1 : virtual public Base {
public:
    void show() const override {
        std::cout << "Intermediate1 show." << std::endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void show() const override {
        std::cout << "Intermediate2 show." << std::endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void show() const override {
        std::cout << "Derived show." << std::endl;
    }
};

int main() {
    Derived obj;
    obj.show();  // Calls Derived's show()

    return 0;
}
