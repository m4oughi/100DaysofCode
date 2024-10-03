#include <iostream>
using namespace std;

class PointerSimulator {
    int* ptr;
public:
    PointerSimulator(int* p) : ptr(p) {}

    int& operator*() {
        return *ptr;
    }
};

int main() {
    int x = 100;
    PointerSimulator ps(&x);

    cout << *ps << endl; // Output: 100

    *ps = 200;           // Changing the value of x through overloaded dereference
    cout << x << endl;   // Output: 200
    
    return 0;
}
