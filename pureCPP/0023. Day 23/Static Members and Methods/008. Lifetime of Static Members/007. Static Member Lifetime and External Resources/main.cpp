#include <iostream>
using namespace std;

class ResourceManager {
public:
    static int openConnections;  // Static member to track resources

    ResourceManager() {
        openConnections++;
    }

    ~ResourceManager() {
        openConnections--;
    }

    static void showConnections() {
        cout << "Open connections: " << openConnections << endl;
    }
};

// Initialize static member
int ResourceManager::openConnections = 0;

void manageResources() {
    ResourceManager r1, r2;
    ResourceManager::showConnections();  // Output: 2
}

int main() {
    manageResources();
    ResourceManager::showConnections();  // Output: 0 (after r1 and r2 are destroyed)

    return 0;
}
