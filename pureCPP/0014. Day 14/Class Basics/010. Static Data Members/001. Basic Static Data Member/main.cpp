#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static data member

    Counter() {
        count++;
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;

    cout << "Number of objects created: " << Counter::count << endl;
    return 0;
}
