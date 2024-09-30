#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    // Static member function
    static void increment() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    Counter::increment();  // Accessing static function without object
    Counter::increment();

    cout << "Count: " << Counter::getCount() << endl;
    return 0;
}
