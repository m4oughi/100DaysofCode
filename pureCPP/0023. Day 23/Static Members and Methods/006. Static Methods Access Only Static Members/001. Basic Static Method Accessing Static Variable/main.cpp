#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static variable

public:
    static void increment() {
        count++;  // Static method accessing static variable
    }

    static int getCount() {
        return count;  // Static method returning static variable
    }
};

// Define the static variable outside the class
int Counter::count = 0;

int main() {
    Counter::increment();  // Increment using static method
    cout << "Count: " << Counter::getCount() << endl;  // Output: 1

    Counter::increment();  // Increment again
    cout << "Count: " << Counter::getCount() << endl;  // Output: 2

    return 0;
}
