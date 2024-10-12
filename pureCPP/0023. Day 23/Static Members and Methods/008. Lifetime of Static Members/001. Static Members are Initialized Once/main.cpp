#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member

    Counter() {
        count++;  // Increment static member when object is created
    }
};

// Initialize static member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    // The static member keeps track of how many objects have been created
    cout << "Count: " << Counter::count << endl;  // Output: 3
    return 0;
}
