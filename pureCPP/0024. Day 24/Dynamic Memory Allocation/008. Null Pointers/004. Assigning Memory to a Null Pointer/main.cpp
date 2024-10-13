#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // initialize with null

    ptr = new int(5); // assign dynamic memory to the null pointer
    cout << "Value: " << *ptr << endl;

    delete ptr; // cleanup memory
    return 0;
}
