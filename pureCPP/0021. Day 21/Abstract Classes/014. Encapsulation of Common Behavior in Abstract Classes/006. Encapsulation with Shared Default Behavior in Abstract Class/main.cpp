#include <iostream>
using namespace std;

// Abstract Base Class
class Tool {
public:
    // Default behavior provided in the abstract class
    virtual void operate() {
        cout << "Operating the tool in default mode." << endl;
    }

    virtual void useTool() = 0;  // Pure virtual function
};

// Derived Class 1
class Hammer : public Tool {
public:
    void useTool() override {
        cout << "Hammer is being used to hit nails." << endl;
    }
};

// Derived Class 2 (overrides default behavior)
class ElectricDrill : public Tool {
public:
    void operate() override {
        cout << "Operating the electric drill with high power." << endl;
    }

    void useTool() override {
        cout << "Drill is being used to make holes." << endl;
    }
};

int main() {
    Tool* hammer = new Hammer();
    Tool* drill = new ElectricDrill();

    hammer->operate();     // Outputs: Operating the tool in default mode.
    hammer->useTool();     // Outputs: Hammer is being used to hit nails.

    drill->operate();      // Outputs: Operating the electric drill with high power.
    drill->useTool();      // Outputs: Drill is being used to make holes.

    delete hammer;
    delete drill;

    return 0;
}
