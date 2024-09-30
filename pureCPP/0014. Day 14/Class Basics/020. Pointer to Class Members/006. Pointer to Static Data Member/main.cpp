#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        ++count;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;

    // Pointer to static data member
    int* countPtr = &Counter::count;

    cout << "Counter value: " << *countPtr << endl;

    return 0;
}
