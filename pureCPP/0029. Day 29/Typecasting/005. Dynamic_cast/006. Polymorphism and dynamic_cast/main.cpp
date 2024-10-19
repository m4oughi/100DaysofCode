#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class." << endl;
    }
    virtual ~Base() {}
};

class DerivedA : public Base {
public:
    void show() override {
        cout << "DerivedA class." << endl;
    }
};

class DerivedB : public Base {
public:
    void show() override {
        cout << "DerivedB class." << endl;
    }
};

void identify(Base* basePtr) {
    if (DerivedA* da = dynamic_cast<DerivedA*>(basePtr)) {
        da->show();
    } else if (DerivedB* db = dynamic_cast<DerivedB*>(basePtr)) {
        db->show();
    } else {
        basePtr->show();
    }
}

int main() {
    Base* a = new DerivedA();
    Base* b = new DerivedB();

    identify(a);  // Calls DerivedA's show()
    identify(b);  // Calls DerivedB's show()

    delete a;
    delete b;
    return 0;
}
