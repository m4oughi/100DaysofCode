#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member

    Counter() {
        count++;  // Increment the static data member
    }
};

// Initialize the static data member outside the class
int Counter::count = 0;

int main() {
    Counter obj1;
    Counter obj2;

    cout << "Total objects created: " << Counter::count << endl;
    return 0;
}
