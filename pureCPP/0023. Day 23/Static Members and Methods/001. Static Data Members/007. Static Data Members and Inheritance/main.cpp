#include <iostream>
using namespace std;

class Parent {
public:
    static int familyCount;  // Static member in the parent class
};

class Child : public Parent {
public:
    Child() {
        familyCount++;  // Child class can access the static member from Parent
    }
};

// Initialize static data member in Parent class
int Parent::familyCount = 0;

int main() {
    Child c1, c2;

    cout << "Total family members: " << Parent::familyCount << endl;
    return 0;
}
