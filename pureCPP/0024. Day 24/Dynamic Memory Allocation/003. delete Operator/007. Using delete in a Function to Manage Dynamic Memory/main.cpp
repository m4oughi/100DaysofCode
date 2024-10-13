#include <iostream>
using namespace std;

void deallocateMemory(int* ptr) {
    delete ptr; // function to deallocate memory
    ptr = nullptr; // set to nullptr to avoid dangling pointer
}

int main() {
    int* ptr = new int(30); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    deallocateMemory(ptr); // pass pointer to a function for deletion

    return 0;
}
