#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    // Declare friend class
    friend class CountManipulator;
};

// Initialize static member
int Counter::count = 0;

class CountManipulator {
public:
    void increment() {
        Counter::count++;  // Access static private member
    }

    void display() {
        cout << "Count: " << Counter::count << endl;  // Access static private member
    }
};

int main() {
    CountManipulator manip;
    manip.increment();
    manip.increment();
    manip.display();  // Friend class manipulating static private member
    return 0;
}
