#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static member

    Counter() {
        count++;
    }

    ~Counter() {
        count--;
    }
};

// Initialize static member outside the class
int Counter::count = 0;

int main() {
    {
        Counter obj1, obj2;
        cout << "Count after object creation: " << Counter::count << endl;  // Output: 2
    }  // obj1 and obj2 go out of scope

    cout << "Count after object destruction: " << Counter::count << endl;  // Output: 0
    return 0;
}
