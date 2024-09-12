#include <iostream>

struct Base1 {
    virtual void show() {
        std::cout << "Base1 class function" << std::endl;
    }
};

struct Base2 {
    virtual void display() {
        std::cout << "Base2 class function" << std::endl;
    }
};

struct Derived : public Base1, public Base2 {
    void show() override {
        std::cout << "Derived show function" << std::endl;
    }

    void display() override {
        std::cout << "Derived display function" << std::endl;
    }
};

int main() {
    Base1* base1Ptr = new Derived;
    base1Ptr->show();  // Calls Derived show function

    Base2* base2Ptr = new Derived;
    base2Ptr->display();  // Calls Derived display function

    delete base1Ptr;
    delete base2Ptr;
}
