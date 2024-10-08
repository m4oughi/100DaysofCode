#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        // Simulate some cleanup work
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        // Simulate some cleanup work
    }
};

int main() {
    const int N = 1000000;
    Base** arr = new Base*[N];

    // Fill the array with Derived objects
    for (int i = 0; i < N; ++i) {
        arr[i] = new Derived;
    }

    // Deleting objects
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        delete arr[i];  // Calls virtual destructor
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Virtual destructor call time: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " milliseconds" << endl;

    delete[] arr;
    return 0;
}
