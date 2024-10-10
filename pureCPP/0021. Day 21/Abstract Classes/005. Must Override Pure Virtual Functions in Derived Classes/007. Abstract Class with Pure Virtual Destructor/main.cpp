#include <iostream>
using namespace std;

class Component {
public:
    virtual void execute() = 0;
    virtual ~Component() = 0;  // Pure virtual destructor
};

Component::~Component() {
    cout << "Base component destroyed." << endl;
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
    Component* comp = new ConcreteComponent();
    comp->execute();  // Outputs "Executing component..."
    delete comp;      // Outputs "ConcreteComponent destroyed." followed by "Base component destroyed."
    return 0;
}
