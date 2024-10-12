#include <iostream>
using namespace std;

class SharedData {
public:
    static int sharedValue;  // Static member shared across all objects

    void modifySharedValue(int newValue) {
        sharedValue = newValue;  // Modify static member
    }
};

// Initialize static member
int SharedData::sharedValue = 100;

int main() {
    SharedData obj1, obj2;

    // Modify shared value using one object
    obj1.modifySharedValue(500);
    cout << "Shared value (from obj2): " << obj2.sharedValue << endl;  // Output: 500

    return 0;
}
