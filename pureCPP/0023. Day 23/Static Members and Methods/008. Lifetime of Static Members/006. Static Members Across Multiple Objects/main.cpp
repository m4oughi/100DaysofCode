#include <iostream>
using namespace std;

class Example {
public:
    static int staticCounter;

    Example() {
        staticCounter++;  // Increment static member each time an object is created
    }

    ~Example() {
        staticCounter--;  // Decrement static member when an object is destroyed
    }
};

// Initialize static member
int Example::staticCounter = 0;

int main() {
    Example ex1;
    cout << "Counter after first object: " << Example::staticCounter << endl;  // Output: 1

    {
        Example ex2, ex3;
        cout << "Counter inside block: " << Example::staticCounter << endl;  // Output: 3
    }  // ex2 and ex3 go out of scope and are destroyed

    cout << "Counter after block: " << Example::staticCounter << endl;  // Output: 1
    return 0;
}
