#include <iostream>
using namespace std;

class Grandparent {
public:
    virtual void task() = 0;  // Pure virtual function
};

class Parent1 : virtual public Grandparent {
public:
    void task() override {
        cout << "Parent1's task implementation" << endl;
    }
};

class Parent2 : virtual public Grandparent {
public:
    void task() override {
        cout << "Parent2's task implementation" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void task() override {
        cout << "Child resolving diamond problem for task()" << endl;
    }
};

int main() {
    Child obj;
    obj.task();  // Calls Child's task(), resolving the diamond problem
    return 0;
}
