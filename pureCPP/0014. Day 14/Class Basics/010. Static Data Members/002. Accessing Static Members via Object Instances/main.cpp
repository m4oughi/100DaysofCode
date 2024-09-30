#include <iostream>
using namespace std;

class Box {
public:
    static int objectCount;  // Static data member

    Box() {
        objectCount++;
    }
};

int Box::objectCount = 0;  // Initialize static member outside the class

int main() {
    Box b1, b2;
    cout << "Object count via object b1: " << b1.objectCount << endl;
    cout << "Object count via object b2: " << b2.objectCount << endl;
    return 0;
}
