#include <iostream>
using namespace std;

class ResourceManager {
private:
    static int resourceCount;  // Static member to track resources

public:
    static void allocateResource() {
        resourceCount++;
        cout << "Allocated resource. Total resources: " << resourceCount << endl;
    }

    static void releaseResource() {
        if (resourceCount > 0) {
            resourceCount--;
            cout << "Released resource. Total resources: " << resourceCount << endl;
        }
    }
};

// Initialize static member
int ResourceManager::resourceCount = 0;

int main() {
    // Accessing resource manager without global variables
    ResourceManager::allocateResource();  // Output: Allocated resource. Total resources: 1
    ResourceManager::allocateResource();  // Output: Allocated resource. Total resources: 2
    ResourceManager::releaseResource();   // Output: Released resource. Total resources: 1

    return 0;
}
