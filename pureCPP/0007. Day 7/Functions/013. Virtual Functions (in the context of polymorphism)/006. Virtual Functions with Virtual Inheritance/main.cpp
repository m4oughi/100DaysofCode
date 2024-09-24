#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base show function." << std::endl;
    }
};

class Intermediate1 : virtual public Base {
public:
    void show() override {
        std::cout << "Intermediate1 show function." << std::endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void show() override {
        std::cout << "Intermediate2 show function." << std::endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void show() override {
        std::cout << "Derived show function." << std::endl;
    }
};

int main() {
    Derived obj;
    obj.show();  // Calls Derived's show()

    return 0;
}
