#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        virtual void show() {
            cout << "Inner class function in Outer class" << endl;
        }
    };
};

class Derived : public Outer::Inner {
public:
    void show() override {
        cout << "Derived class inheriting from Inner class" << endl;
    }
};

int main() {
    Outer::Inner* obj = new Derived();
    obj->show();
    delete obj;

    return 0;
}
