#include <iostream>
using namespace std;

class Counter {
public:
    static int totalCount;  // Static member

    static void increment() {  // Static method
        totalCount++;
    }

    void callIncrement() {  // Non-static method
        increment();  // Non-static method can call static methods
    }
};

// Initialize static member
int Counter::totalCount = 0;

int main() {
    Counter counter;
    counter.callIncrement();  // Call non-static method which calls static method

    cout << "Total count: " << Counter::totalCount << endl;  // Output: 1
    return 0;
}
