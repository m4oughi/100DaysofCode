#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    // No delete statement, leading to a memory leak

    return 0; // Memory leak occurs because the allocated memory is not released
}
