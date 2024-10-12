#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member

    static void increment() {  // Static member function
        count++;
    }

    static void showCount() {
        cout << "Current count: " << count << endl;
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::showCount();  // Output: Current count: 1

    Counter::increment();
    Counter::showCount();  // Output: Current count: 2

    return 0;
}
