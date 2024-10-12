#include <iostream>
using namespace std;

class ClassA {
public:
    static int sharedValue;  // Static member shared between classes
};

class ClassB {
public:
    void modifySharedValue(int val) {
        ClassA::sharedValue = val;  // Modify static data member in ClassA
    }
};

// Initialize static data member
int ClassA::sharedValue = 50;

int main() {
    ClassA objA;
    ClassB objB;

    cout << "Initial shared value in ClassA: " << ClassA::sharedValue << endl;

    objB.modifySharedValue(100);  // Modify shared value using ClassB

    cout << "Shared value in ClassA after modification by ClassB: " << ClassA::sharedValue << endl;
    
    return 0;
}
