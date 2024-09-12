#include <iostream>

struct Base {
    virtual void show() {
        std::cout << "Base class function" << std::endl;
    }
};

struct Derived1 : public Base {
    void show() override {
        std::cout << "Derived1 class function" << std::endl;
    }
};

struct Derived2 : public Base {
    void show() override {
        std::cout << "Derived2 class function" << std::endl;
    }
};

int main() {
    Base* arr[2];
    arr[0] = new Derived1;
    arr[1] = new Derived2;

    for (int i = 0; i < 2; ++i) {
        arr[i]->show();  // Calls correct Derived show function for each element
    }

    delete arr[0];
    delete arr[1];
}
