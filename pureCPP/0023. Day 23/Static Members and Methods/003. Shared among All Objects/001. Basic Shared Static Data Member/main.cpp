#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member shared by all objects

    Counter() {
        count++;  // Increments the shared static member for every object created
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Static member is shared among all objects
    cout << "Number of objects created: " << Counter::count << endl;  // Output: 3
    return 0;
}
