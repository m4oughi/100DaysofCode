#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Declaration of static member

    Counter() {
        count++;  // Increment count on object creation
    }
};

// Memory allocation for static member
int Counter::count = 0;  // Static members must be initialized outside the class

int main() {
    Counter obj1;
    Counter obj2;

    // Static member is shared among all objects
    cout << "Total objects created: " << Counter::count << endl;  // Output: 2
    return 0;
}
