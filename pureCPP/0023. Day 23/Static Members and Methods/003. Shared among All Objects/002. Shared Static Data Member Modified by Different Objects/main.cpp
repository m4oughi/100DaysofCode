#include <iostream>
using namespace std;

class Test {
public:
    static int sharedValue;  // Static data member shared by all objects

    void modifySharedValue(int val) {
        sharedValue = val;  // Modify the shared static data member
    }
};

int Test::sharedValue = 10;  // Initialize the shared static data member

int main() {
    Test obj1, obj2;

    obj1.modifySharedValue(20);  // Modify sharedValue using obj1
    cout << "Value after modification by obj1: " << obj2.sharedValue << endl;  // Output: 20

    obj2.modifySharedValue(50);  // Modify sharedValue using obj2
    cout << "Value after modification by obj2: " << obj1.sharedValue << endl;  // Output: 50

    return 0;
}
