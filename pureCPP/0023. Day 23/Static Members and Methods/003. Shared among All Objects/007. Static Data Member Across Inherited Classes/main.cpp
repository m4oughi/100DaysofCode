#include <iostream>
using namespace std;

class Parent {
public:
    static int familyCount;  // Shared static member across family
};

class Child : public Parent {
    // Inherits the static data member from Parent class
};

// Initialize static data member
int Parent::familyCount = 0;

int main() {
    Child child1, child2;

    Parent::familyCount++;  // Increment static member
    Child::familyCount++;  // Access static member via Child class

    cout << "Family count: " << Parent::familyCount << endl;  // Output: 2
    return 0;
}
