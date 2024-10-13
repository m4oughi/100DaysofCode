#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(20); // dynamically allocate memory

    delete ptr; // deallocate first allocation before reassigning
    ptr = new int(30); // reassign pointer

    delete ptr; // deallocate second allocation
    return 0;
}
