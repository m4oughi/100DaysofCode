#include <iostream>
#include <chrono>
using namespace std;

class Base {
public:
    virtual void process() {
        // Simulate some heavy computation
    }
};

class Derived : public Base {
public:
    void process() override {
        // Simulate some heavy computation
    }
};

int main() {
    const int N = 1000000;
    Base* obj = new Derived;

    // Measure time for virtual function calls in a tight loop
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        obj->process();  // Virtual function call
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Virtual function call time in tight loop: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " milliseconds" << endl;

    delete obj;
    return 0;
}
