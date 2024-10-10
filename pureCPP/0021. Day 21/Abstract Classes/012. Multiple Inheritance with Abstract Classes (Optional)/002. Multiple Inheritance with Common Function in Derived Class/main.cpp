#include <iostream>
using namespace std;

// Abstract Class 1
class Eater {
public:
    virtual void eat() = 0;
};

// Abstract Class 2
class Sleeper {
public:
    virtual void sleep() = 0;
};

// Derived Class
class Bear : public Eater, public Sleeper {
public:
    void eat() override {
        cout << "Bear is eating!" << endl;
    }
    void sleep() override {
        cout << "Bear is sleeping!" << endl;
    }
};

int main() {
    Bear bear;
    bear.eat();    // Outputs: Bear is eating!
    bear.sleep();  // Outputs: Bear is sleeping!

    return 0;
}
