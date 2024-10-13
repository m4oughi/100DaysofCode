#include <iostream>
using namespace std;

void createMemoryLeak() {
    int* ptr = new int(50); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    // No delete, memory is never deallocated after the function returns
}

int main() {
    createMemoryLeak(); // memory leak occurs
    return 0;
}
