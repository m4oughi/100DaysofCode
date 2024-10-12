#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Shared static data member

    Counter() {
        count++;
    }

    ~Counter() {
        count--;
    }

    static void showCount() {
        cout << "Current count: " << count << endl;
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    {
        Counter obj1, obj2;
        Counter::showCount();  // Output: Current count: 2
    }  // obj1 and obj2 go out of scope and are destroyed

    Counter::showCount();  // Output: Current count: 0 (static member persists)
    return 0;
}
