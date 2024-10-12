#include <iostream>
using namespace std;

class Parent {
public:
    static int familyCount;  // Static data member
};

// Initialize static data member
int Parent::familyCount = 0;

class Child : public Parent {
    // Inherits static member from Parent class
};

int main() {
    // Access and modify static member via Parent class
    Parent::familyCount++;
    cout << "Family count via Parent: " << Parent::familyCount << endl;  // Output: 1

    // Access static member via Child class
    Child::familyCount++;
    cout << "Family count via Child: " << Child::familyCount << endl;  // Output: 2

    return 0;
}
