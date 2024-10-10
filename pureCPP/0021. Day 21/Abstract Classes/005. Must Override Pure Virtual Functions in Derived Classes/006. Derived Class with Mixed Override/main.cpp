#include <iostream>
using namespace std;

class Tool {
public:
    virtual void useTool() = 0;
    virtual void maintainTool() = 0;
};

class Hammer : public Tool {
public:
    void useTool() override {
        cout << "Using hammer." << endl;
    }
    // Did not implement maintainTool(), so Hammer remains abstract
};

class AdvancedHammer : public Hammer {
public:
    void maintainTool() override {
        cout << "Maintaining hammer." << endl;
    }
};

int main() {
    // Hammer hammer;  // Error: Hammer is still abstract
    AdvancedHammer advHammer;
    advHammer.useTool();       // Outputs "Using hammer."
    advHammer.maintainTool();  // Outputs "Maintaining hammer."
    return 0;
}
