#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(20); // dynamically allocate memory
    ptr = new int(30); // memory leak, the first allocated memory is not deallocated

    delete ptr; // only deletes the second allocation
    return 0;
}
