#include <iostream>
using namespace std;

int main() {
    char buffer[sizeof(int)]; // allocate a buffer large enough to hold an int
    int* ptr = new(buffer) int(99); // use placement new to initialize an int in the buffer

    cout << "Value in buffer: " << *ptr << endl;

    ptr->~int(); // explicitly call destructor (only required for objects, not primitive types)

    return 0;
}
