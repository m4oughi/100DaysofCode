#include <iostream>
using namespace std;

class Base {
public:
    virtual void process() {
        cout << "Base class process()" << endl;
    }
};

class Level1 : public Base {
public:
    void process() override {
        cout << "Level1 class process()" << endl;
    }
};

class Level2 : public Level1 {
public:
    void process() final {  // Final implementation in a deep hierarchy
        cout << "Level2 class process()" << endl;
    }
};

class Level3 : public Level2 {
public:
    // Compiler error: cannot override final function
    void process() override {
        cout << "Level3 class process()" << endl;
    }
};

int main() {
    Level2 obj;
    obj.process();  // Calls the final implementation at Level2
    return 0;
}
