#include <iostream>
using namespace std;

class MemoryManager {
private:
    static int allocatedMemory;

public:
    static void allocateMemory(int size) {
        allocatedMemory += size;
    }

    static void freeMemory(int size) {
        allocatedMemory -= size;
    }

    static int getMemoryUsage() {
        return allocatedMemory;
    }
};

// Allocate memory for static member
int MemoryManager::allocatedMemory = 0;

int main() {
    MemoryManager::allocateMemory(100);
    MemoryManager::allocateMemory(200);

    cout << "Total allocated memory: " << MemoryManager::getMemoryUsage() << " MB" << endl;  // Output: 300 MB

    MemoryManager::freeMemory(100);
    cout << "Memory after freeing 100 MB: " << MemoryManager::getMemoryUsage() << " MB" << endl;  // Output: 200 MB

    return 0;
}
