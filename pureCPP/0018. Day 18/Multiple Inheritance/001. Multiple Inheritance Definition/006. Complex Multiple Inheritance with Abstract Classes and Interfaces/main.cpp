#include <iostream>
using namespace std;

class Interface1 {
public:
    virtual void method1() = 0;  // Pure virtual function
};

class Interface2 {
public:
    virtual void method2() = 0;  // Pure virtual function
};

class ConcreteClass : public Interface1, public Interface2 {
public:
    void method1() override {
        cout << "Method 1 Implementation" << endl;
    }

    void method2() override {
        cout << "Method 2 Implementation" << endl;
    }
};

int main() {
    ConcreteClass obj;
    obj.method1();
    obj.method2();
    return 0;
}
