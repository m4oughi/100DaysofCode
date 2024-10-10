#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    // Granting access to this function to modify the static member
    friend void incrementCount();
};

int Counter::count = 0;  // Initialize static member

void incrementCount() {
    Counter::count++;  // Accessing and modifying private static member
    cout << "Count: " << Counter::count << endl;
}

int main() {
    incrementCount();  // Friend function accessing static data
    incrementCount();
    return 0;
}
