#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // dynamically allocate memory for an integer
    *ptr = 42;          // assign value
    cout << "Value: " << *ptr << endl; // output value

    delete ptr; // deallocate memory
    return 0;
}
