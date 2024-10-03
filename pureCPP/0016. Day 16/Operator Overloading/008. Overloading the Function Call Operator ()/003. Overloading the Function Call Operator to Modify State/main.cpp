#include <iostream>
using namespace std;

class CallCounter {
    int count;  // To track the number of calls
public:
    CallCounter() : count(0) {}  // Initialize count to 0

    // Overloading the function call operator
    void operator()() {
        count++;  // Increment count each time the operator is called
    }

    // Method to display the current count
    void displayCount() const {
        cout << "Function called " << count << " times." << endl;
    }
};

int main() {
    CallCounter counter;  // Create a CallCounter object
    counter();  // Call operator() - increments count
    counter();  // Call operator() - increments count
    counter.displayCount();  // Output: Function called 2 times.

    return 0;
}
