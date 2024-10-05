#include <iostream>
using namespace std;

class Base1 {
public:
    void func1() {
        cout << "Base1 func1" << endl;
    }
    
    void func2() {
        cout << "Base1 func2" << endl;
    }
};

class Base2 {
public:
    void func1() {
        cout << "Base2 func1" << endl;
    }
    
    void func2() {
        cout << "Base2 func2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void callFuncs() {
        Base1::func1();  // Calls Base1's func1
        Base2::func1();  // Calls Base2's func1
        Base1::func2();  // Calls Base1's func2
        Base2::func2();  // Calls Base2's func2
    }
};

int main() {
    Derived obj;
    obj.callFuncs();
    return 0;
}
