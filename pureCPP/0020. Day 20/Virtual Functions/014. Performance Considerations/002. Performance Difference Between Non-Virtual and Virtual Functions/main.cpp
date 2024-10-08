#include <iostream>
#include <chrono>
using namespace std;

class NonVirtualClass {
public:
    void show() {
        cout << "Non-virtual function" << endl;
    }
};

class VirtualClass {
public:
    virtual void show() {
        cout << "Virtual function" << endl;
    }
};

int main() {
    NonVirtualClass nonVirtualObj;
    VirtualClass virtualObj;

    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        nonVirtualObj.show();
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Non-virtual function time: "
         << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        virtualObj.show();
    }
    end = chrono::high_resolution_clock::now();
    cout << "Virtual function time: "
         << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " microseconds" << endl;

    return 0;
}
