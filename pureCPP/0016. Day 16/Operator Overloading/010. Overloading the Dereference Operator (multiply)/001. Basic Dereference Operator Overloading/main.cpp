#include <iostream>
using namespace std;

class IntPointer {
    int* ptr;
public:
    IntPointer(int* p) : ptr(p) {}

    // Overload dereference operator
    int& operator*() {
        return *ptr;
    }
};

int main() {
    int value = 10;
    IntPointer ip(&value);

    cout << *ip << endl;  // Output: 10
    *ip = 20;
    cout << value << endl;  // Output: 20

    return 0;
}
