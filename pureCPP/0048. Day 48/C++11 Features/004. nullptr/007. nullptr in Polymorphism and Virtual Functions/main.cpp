#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class" << std::endl;
    }
};

void display(Base* ptr) {
    if (ptr)
        ptr->show();
    else
        std::cout << "Received nullptr, no object to display." << std::endl;
}

int main() {
    display(nullptr); // Pass nullptr to check behavior

    Derived d;
    display(&d);

    return 0;
}
