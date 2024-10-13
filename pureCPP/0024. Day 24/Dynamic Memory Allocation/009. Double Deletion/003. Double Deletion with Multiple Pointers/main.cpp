#include <iostream>
using namespace std;

int main() {
    int* ptr1 = new int(30); // dynamically allocate memory
    int* ptr2 = ptr1; // ptr2 points to the same memory

    delete ptr1; // first deletion
    delete ptr2; // second deletion (Error: undefined behavior)

    return 0;
}
