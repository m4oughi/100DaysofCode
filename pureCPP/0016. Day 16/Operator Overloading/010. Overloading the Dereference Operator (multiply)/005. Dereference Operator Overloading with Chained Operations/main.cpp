#include <iostream>
using namespace std;

class DoublePointer {
    int** ptr;
public:
    DoublePointer(int** p) : ptr(p) {}

    // Overload dereference operator for first level
    int*& operator*() {
        return *ptr;
    }
};

int main() {
    int value = 50;
    int* p = &value;
    DoublePointer dp(&p);

    cout << **dp << endl;  // Output: 50
    **dp = 100;
    cout << value << endl;  // Output: 100

    return 0;
}
