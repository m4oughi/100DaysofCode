#include <iostream>
using namespace std;

class ClassA {
public:
    static int sharedValue;  // Static member shared across different classes
};

class ClassB {
public:
    void updateSharedValue(int value) {
        ClassA::sharedValue = value;  // Modify shared static data member in ClassA
    }
};

// Initialize static data member
int ClassA::sharedValue = 100;

int main() {
    ClassA objA;
    ClassB objB;

    cout << "Initial shared value: " << ClassA::sharedValue << endl;  // Output: 100

    objB.updateSharedValue(200);  // Modify static member from ClassB
    cout << "Shared value after modification: " << objA.sharedValue << endl;  // Output: 200

    return 0;
}
