#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

void print(Base obj) {
    obj.show();  // Object slicing occurs here
}

int main() {
    Derived derivedObj;
    print(derivedObj);  // Calls Base's show due to object slicing

    return 0;
}
