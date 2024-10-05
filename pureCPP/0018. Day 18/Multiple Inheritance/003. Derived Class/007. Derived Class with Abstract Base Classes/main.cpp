#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void method1() = 0;  // Pure virtual method
};

class Base2 {
public:
    virtual void method2() = 0;  // Pure virtual method
};

class Derived : public Base1, public Base2 {
public:
    void method1() override {
        cout << "Method1 Implementation" << endl;
    }

    void method2() override {
        cout << "Method2 Implementation" << endl;
    }
};

int main() {
    Derived obj;
    obj.method1();
    obj.method2();
    return 0;
}
