#include <iostream>
using namespace std;

void allocateMemory() {
    int* ptr = new int(100); // dynamically allocate memory
    cout << "Allocated value: " << *ptr << endl;

    // forgot to delete ptr, causing a memory leak
}

int main() {
    allocateMemory(); // memory is not deallocated here
    return 0;
}
