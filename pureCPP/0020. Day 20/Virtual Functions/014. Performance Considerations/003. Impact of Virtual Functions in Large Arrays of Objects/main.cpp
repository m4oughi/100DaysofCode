#include <iostream>
#include <chrono>
using namespace std;

class Base {
public:
    virtual void show() {
        // Simulate some work
    }
};

class Derived : public Base {
public:
    void show() override {
        // Simulate some work
    }
};

int main() {
    const int N = 1000000;
    Base** arr = new Base*[N];

    // Fill the array with Derived objects
    for (int i = 0; i < N; ++i) {
        arr[i] = new Derived;
    }

    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        arr[i]->show();  // Virtual function call
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Virtual function call time for large array: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " milliseconds" << endl;

    // Cleanup
    for (int i = 0; i < N; ++i) {
        delete arr[i];
    }
    delete[] arr;

    return 0;
}
