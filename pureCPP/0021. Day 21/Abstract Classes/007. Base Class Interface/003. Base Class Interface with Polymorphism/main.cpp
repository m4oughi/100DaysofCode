#include <iostream>
using namespace std;

class IWorker {
public:
    virtual void doWork() = 0;  // Pure virtual function as interface
};

class Programmer : public IWorker {
public:
    void doWork() override {
        cout << "Writing code..." << endl;
    }
};

class Designer : public IWorker {
public:
    void doWork() override {
        cout << "Designing interfaces..." << endl;
    }
};

void assignTask(IWorker* worker) {
    worker->doWork();  // Polymorphic behavior through the interface
}

int main() {
    Programmer programmer;
    Designer designer;

    assignTask(&programmer);  // Outputs "Writing code..."
    assignTask(&designer);    // Outputs "Designing interfaces..."
    
    return 0;
}
