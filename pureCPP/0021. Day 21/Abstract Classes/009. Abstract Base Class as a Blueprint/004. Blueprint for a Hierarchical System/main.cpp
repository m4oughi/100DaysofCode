#include <iostream>
using namespace std;

// Abstract Base Class (Blueprint)
class Worker {
public:
    virtual void work() = 0;
};

class Engineer : public Worker {
public:
    void work() override {
        cout << "Engineer is designing systems." << endl;
    }
};

class Manager : public Worker {
public:
    void work() override {
        cout << "Manager is supervising the project." << endl;
    }
};

class SeniorManager : public Manager {
public:
    void work() override {
        cout << "Senior Manager is making strategic decisions." << endl;
    }
};

int main() {
    Worker* worker1 = new Engineer();
    Worker* worker2 = new SeniorManager();

    worker1->work();  // Outputs "Engineer is designing systems."
    worker2->work();  // Outputs "Senior Manager is making strategic decisions."

    delete worker1;
    delete worker2;

    return 0;
}
