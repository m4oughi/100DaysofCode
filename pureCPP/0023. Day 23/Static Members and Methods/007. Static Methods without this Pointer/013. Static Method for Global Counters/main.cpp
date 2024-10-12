#include <iostream>
using namespace std;

class GlobalCounter {
private:
    static int counter;  // Static member

public:
    static void increment() {  // Static method to increment counter
        counter++;
    }

    static int getCounter() {  // Static method to access counter
        return counter;
    }
};

// Initialize static member
int GlobalCounter::counter = 0;

int main() {
    GlobalCounter::increment();  // Increment counter without an instance
    GlobalCounter::increment();

    cout << "Global counter: " << GlobalCounter::getCounter() << endl;  // Output: 2
    return 0;
}
