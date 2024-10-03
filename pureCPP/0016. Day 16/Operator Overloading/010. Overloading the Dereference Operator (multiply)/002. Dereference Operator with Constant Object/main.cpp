#include <iostream>
using namespace std;

class IntPointer {
    int* ptr;
public:
    IntPointer(int* p) : ptr(p) {}

    // Overload dereference operator for non-const objects
    int& operator*() {
        return *ptr;
    }

    // Overload dereference operator for const objects
    const int& operator*() const {
        return *ptr;
    }
};

int main() {
    int value = 10;
    const IntPointer ip(&value);

    cout << *ip << endl;  // Output: 10

    return 0;
}
