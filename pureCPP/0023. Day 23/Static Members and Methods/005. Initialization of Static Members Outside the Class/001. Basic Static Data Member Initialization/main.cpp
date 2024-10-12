#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Declaration of static data member
};

// Initialize static data member outside the class
int Counter::count = 0;

int main() {
    // Access static member using the class name
    cout << "Initial count: " << Counter::count << endl;  // Output: 0
    return 0;
}
