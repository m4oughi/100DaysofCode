#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Private static member variable

public:
    static void increment() {
        count++;  // Modify static member within the class
    }

    static int getCount() {  // Provide access via a public getter method
        return count;
    }
};

// Initialize the private static member
int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();

    // Access private static member via public method
    cout << "Count: " << Counter::getCount() << endl;  // Output: 2
    return 0;
}
