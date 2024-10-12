#include <iostream>
using namespace std;

class LifetimeTracker {
public:
    static int lifetimeCount;  // Static member to track lifetime of static members

    static void showCount() {
        cout << "Lifetime count: " << lifetimeCount << endl;
    }
};

// Initialize static member before any object creation
int LifetimeTracker::lifetimeCount = 10;

int main() {
    cout << "Before object creation: ";
    LifetimeTracker::showCount();  // Output: 10

    LifetimeTracker obj;
    obj.lifetimeCount = 20;  // Modify static member

    cout << "After object creation: ";
    LifetimeTracker::showCount();  // Output: 20

    return 0;
}
