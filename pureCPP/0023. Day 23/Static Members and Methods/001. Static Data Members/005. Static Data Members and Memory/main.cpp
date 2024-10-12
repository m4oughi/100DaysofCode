#include <iostream>
using namespace std;

class Example {
public:
    static int count;  // Static data member to track number of instances

    Example() {
        count++;  // Increment count each time an object is created
    }

    ~Example() {
        count--;  // Decrement count when an object is destroyed
    }

    static void showCount() {
        cout << "Current count: " << count << endl;
    }
};

// Initialize static data member
int Example::count = 0;

int main() {
    Example::showCount();  // No objects created yet, count = 0

    Example obj1;
    Example obj2;
    Example::showCount();  // Two objects created, count = 2

    {
        Example obj3;
        Example::showCount();  // Three objects created, count = 3
    }  // obj3 goes out of scope, destructor called

    Example::showCount();  // Back to two objects, count = 2

    return 0;
}
