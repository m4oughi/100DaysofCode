#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(5); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // deallocate memory, but ptr still points to the freed memory

    // Dangling pointer
    cout << "Value after delete (Dangling): " << *ptr << endl; // Undefined behavior

    return 0;
}
