#include <iostream>
using namespace std;

// Abstract Base Class 1
class PowerSupply {
public:
    PowerSupply() {
        cout << "PowerSupply constructor called!" << endl;
    }
    
    virtual ~PowerSupply() {
        cout << "PowerSupply destructor called!" << endl;
    }
    
    virtual void providePower() = 0;
};

// Abstract Base Class 2
class Processor {
public:
    Processor() {
        cout << "Processor constructor called!" << endl;
    }
    
    virtual ~Processor() {
        cout << "Processor destructor called!" << endl;
    }
    
    virtual void process() = 0;
};

// Derived Class
class Computer : public PowerSupply, public Processor {
public:
    Computer() {
        cout << "Computer constructor called!" << endl;
    }
    
    ~Computer() {
        cout << "Computer destructor called!" << endl;
    }
    
    void providePower() override {
        cout << "Computer providing power!" << endl;
    }
    
    void process() override {
        cout << "Computer processing data!" << endl;
    }
};

int main() {
    Computer* pc = new Computer();
    pc->providePower();  // Outputs: Computer providing power!
    pc->process();       // Outputs: Computer processing data!
    delete pc;           // Outputs destructors in reverse order: Computer, PowerSupply, Processor

    return 0;
}
