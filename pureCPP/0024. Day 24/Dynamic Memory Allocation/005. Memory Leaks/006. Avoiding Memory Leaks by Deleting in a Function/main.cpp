#include <iostream>
using namespace std;

void fixMemoryLeak() {
    int* ptr = new int(50); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // proper memory deallocation
}

int main() {
    fixMemoryLeak(); // no memory leak
    return 0;
}
