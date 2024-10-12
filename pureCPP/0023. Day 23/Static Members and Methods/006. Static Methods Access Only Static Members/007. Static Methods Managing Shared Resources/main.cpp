#include <iostream>
using namespace std;

class Resource {
private:
    static int activeObjects;  // Static member tracking active objects

public:
    Resource() {
        activeObjects++;  // Increment static member in constructor
    }

    ~Resource() {
        activeObjects--;  // Decrement static member in destructor
    }

    static int getActiveObjects() {
        return activeObjects;  // Static method accessing static member
    }
};

// Initialize static member outside the class
int Resource::activeObjects = 0;

int main() {
    {
        Resource r1, r2;
        cout << "Active objects: " << Resource::getActiveObjects() << endl;  // Output: 2
    }  // r1 and r2 go out of scope here

    cout << "Active objects after scope: " << Resource::getActiveObjects() << endl;  // Output: 0

    return 0;
}
