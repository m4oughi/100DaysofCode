#include <iostream>
using namespace std;

class Parent {
public:
    static int familyCount;  // Static member in the base class
};

// Initialize static member of the base class
int Parent::familyCount = 5;

class Child : public Parent {
    // Inherits static member from Parent
};

int main() {
    // Access static member from both base and derived class
    cout << "Family count (from Parent): " << Parent::familyCount << endl;  // Output: 5
    cout << "Family count (from Child): " << Child::familyCount << endl;    // Output: 5

    return 0;
}
