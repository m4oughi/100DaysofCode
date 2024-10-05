#include <iostream>
using namespace std;

class Interface1 {
public:
    virtual void operation() = 0;  // Pure virtual function
};

class Interface2 : virtual public Interface1 {
public:
    virtual void additionalOperation() = 0;  // Another pure virtual function
};

class Concrete : public Interface2 {
public:
    void operation() override {
        cout << "Concrete implementation of operation" << endl;
    }

    void additionalOperation() override {
        cout << "Concrete implementation of additionalOperation" << endl;
    }
};

int main() {
    Concrete obj;
    obj.operation();             // Calls operation from Concrete
    obj.additionalOperation();   // Calls additionalOperation from Concrete
    return 0;
}
