#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static member

    static void increment() {
        count++;  // Modify static member
    }
};

// Initialize static member outside the class
int Counter::count = 10;

int main() {
    // Access and modify static member via class name
    cout << "Initial count: " << Counter::count << endl;  // Output: 10

    Counter::increment();
    cout << "Count after increment: " << Counter::count << endl;  // Output: 11

    return 0;
}
