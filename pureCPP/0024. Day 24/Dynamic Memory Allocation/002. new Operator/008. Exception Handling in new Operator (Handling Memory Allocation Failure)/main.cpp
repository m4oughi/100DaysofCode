#include <iostream>
using namespace std;

int main() {
    try {
        int* ptr = new int[1000000000]; // attempt to allocate large amount of memory
        cout << "Memory Allocation Successful!" << endl;
        delete[] ptr; // deallocate memory
    } catch (bad_alloc& e) {
        cout << "Memory Allocation Failed: " << e.what() << endl;
    }
    return 0;
}
