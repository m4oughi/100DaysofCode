#include <iostream>
using namespace std;

class ObjectTracker {
public:
    static int objectCount;  // Static member to track object count

    ObjectTracker() {
        objectCount++;
    }

    ~ObjectTracker() {
        objectCount--;  // Static member is decremented when an object is destroyed
    }
};

// Initialize static member
int ObjectTracker::objectCount = 0;

int main() {
    {
        ObjectTracker obj1, obj2;
        cout << "Object count inside block: " << ObjectTracker::objectCount << endl;  // Output: 2
    }  // obj1 and obj2 go out of scope and get destroyed

    // Static member retains its value even after objects are destroyed
    cout << "Object count outside block: " << ObjectTracker::objectCount << endl;  // Output: 0
    return 0;
}
