#include <iostream>
using namespace std;

class Interface1 {
public:
    virtual void show() {
        cout << "Interface1 function." << endl;
    }
    virtual ~Interface1() {}
};

class Interface2 {
public:
    virtual void display() {
        cout << "Interface2 function." << endl;
    }
    virtual ~Interface2() {}
};

class Implementation : public Interface1, public Interface2 {
public:
    void show() override {
        cout << "Implementation of Interface1." << endl;
    }
    void display() override {
        cout << "Implementation of Interface2." << endl;
    }
};

int main() {
    Interface1* interface1Ptr = new Implementation();
    Interface2* interface2Ptr = dynamic_cast<Interface2*>(interface1Ptr);  // Safe cross-cast

    if (interface2Ptr) {
        interface2Ptr->display();  // Calls Interface2's method
    } else {
        cout << "dynamic_cast failed." << endl;
    }

    delete interface1Ptr;
    return 0;
}
