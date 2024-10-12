#include <iostream>
using namespace std;

class GlobalCounter {
public:
    static int counter;  // Static member acting like a global variable

    static void increment() {
        counter++;
    }
};

// Define and allocate memory for static member
int GlobalCounter::counter = 0;

int main() {
    // Accessing static member without creating an object
    GlobalCounter::increment();
    GlobalCounter::increment();

    cout << "Global counter: " << GlobalCounter::counter << endl;  // Output: 2
    return 0;
}
