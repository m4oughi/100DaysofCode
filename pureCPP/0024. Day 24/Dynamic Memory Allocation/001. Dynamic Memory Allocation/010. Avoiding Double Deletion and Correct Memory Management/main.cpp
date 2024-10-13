#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(100); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // deallocate memory

    // If you delete ptr again, it would cause a double deletion error
    // Uncommenting the following line would cause undefined behavior:
    // delete ptr;

    ptr = nullptr; // set to nullptr to avoid double deletion
    return 0;
}
