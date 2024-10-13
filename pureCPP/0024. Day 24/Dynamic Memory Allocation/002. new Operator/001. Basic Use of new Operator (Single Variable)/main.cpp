#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // dynamically allocate memory for a single integer
    *ptr = 10;          // assign a value
    cout << "Value: " << *ptr << endl; // output the value

    delete ptr; // deallocate memory
    return 0;
}
