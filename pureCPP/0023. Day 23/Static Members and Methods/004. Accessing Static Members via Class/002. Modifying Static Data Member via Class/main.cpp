#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member
};

// Initialize static data member
int Counter::count = 0;

int main() {
    // Modify static member using class name
    Counter::count += 10;

    cout << "Modified count: " << Counter::count << endl;  // Output: 10
    return 0;
}
