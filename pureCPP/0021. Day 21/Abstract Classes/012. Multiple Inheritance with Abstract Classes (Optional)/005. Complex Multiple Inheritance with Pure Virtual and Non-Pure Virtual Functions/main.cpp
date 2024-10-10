#include <iostream>
using namespace std;

// Abstract Class 1
class Charger {
public:
    virtual void charge() = 0;  // Pure virtual function
};

// Abstract Class 2
class Speaker {
public:
    virtual void volumeUp() {  // Non-pure virtual function
        cout << "Default volume up" << endl;
    }
};

// Derived Class
class SmartPhone : public Charger, public Speaker {
public:
    void charge() override {
        cout << "SmartPhone is charging!" << endl;
    }
    void volumeUp() override {  // Override non-pure virtual function
        cout << "SmartPhone volume up!" << endl;
    }
};

int main() {
    SmartPhone phone;
    phone.charge();    // Outputs: SmartPhone is charging!
    phone.volumeUp();  // Outputs: SmartPhone volume up!

    return 0;
}
