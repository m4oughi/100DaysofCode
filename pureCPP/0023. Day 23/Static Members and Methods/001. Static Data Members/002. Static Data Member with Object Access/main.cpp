#include <iostream>
using namespace std;

class Test {
public:
    static int sharedValue;

    void modifySharedValue(int val) {
        sharedValue = val;  // Modify static data member
    }
};

int Test::sharedValue = 100;  // Initialize static data member

int main() {
    Test obj1, obj2;

    cout << "Initial shared value: " << obj1.sharedValue << endl;

    obj1.modifySharedValue(200);
    cout << "Shared value after obj1 modifies: " << obj2.sharedValue << endl;

    obj2.modifySharedValue(300);
    cout << "Shared value after obj2 modifies: " << obj1.sharedValue << endl;
    
    return 0;
}
