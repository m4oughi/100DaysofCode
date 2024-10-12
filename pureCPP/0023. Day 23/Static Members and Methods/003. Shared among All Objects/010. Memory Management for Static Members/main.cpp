#include <iostream>
using namespace std;

class MemoryTest {
public:
    static int sharedMemory;  // Static member allocated in a separate memory area

    void accessSharedMemory() {
        cout << "Address of sharedMemory: " << &sharedMemory << endl;
    }
};

// Initialize static data member
int MemoryTest::sharedMemory = 0;

int main() {
    MemoryTest obj1, obj2;

    obj1.accessSharedMemory();  // Outputs address of sharedMemory
    obj2.accessSharedMemory();  // Outputs same address, proving shared memory

    return 0;
}
