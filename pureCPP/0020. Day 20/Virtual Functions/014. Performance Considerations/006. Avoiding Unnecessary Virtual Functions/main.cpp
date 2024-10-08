#include <iostream>
#include <chrono>
using namespace std;

class Base {
public:
    void nonVirtualFunc() {
        // Non-virtual function
    }

    virtual void virtualFunc() {
        // Virtual function
    }
};

class Derived : public Base {
public:
    void nonVirtualFunc() {
        // Non-virtual function
    }

    void virtualFunc() override {
        // Virtual function
    }
};

int main() {
    const int N = 1000000;
    Derived* arr = new Derived[N];

    // Measure non-virtual function call time
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        arr[i].nonVirtualFunc();
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Non-virtual function call time: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " milliseconds" << endl;

    // Measure virtual function call time
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        arr[i].virtualFunc();
    }
    end = chrono::high_resolution_clock::now();
    cout << "Virtual function call time: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " milliseconds" << endl;

    delete[] arr;
    return 0;
}
