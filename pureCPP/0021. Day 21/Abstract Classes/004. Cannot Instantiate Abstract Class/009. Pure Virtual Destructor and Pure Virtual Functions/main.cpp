#include <iostream>
using namespace std;

class Component {
public:
    virtual void execute() = 0;
    virtual ~Component() = 0;  // Pure virtual destructor
};

Component::~Component() {
    cout << "Component destroyed." << endl;
}

class ConcreteComponent : public Component {
public:
    void execute() override {
        cout << "Executing component..." << endl;
    }
    ~ConcreteComponent() {
        cout << "ConcreteComponent destroyed." << endl;
    }
};

int main() {
    // Component comp;  // Error: cannot instantiate abstract class
    ConcreteComponent comp;
    comp.execute();  // Works fine since execute() is implemented
    return 0;
}
