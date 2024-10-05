#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void performTask() {
        cout << "Task from Base1" << endl;
    }
};

class Base2 {
public:
    virtual void performTask() {
        cout << "Task from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void performTask() override {
        cout << "Task from Derived" << endl;
    }
};

int main() {
    Derived d;
    d.performTask();  // Resolves ambiguity by calling Derived's performTask()
    return 0;
}
