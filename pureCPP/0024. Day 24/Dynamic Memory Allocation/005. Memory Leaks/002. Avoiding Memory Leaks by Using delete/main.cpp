#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // proper memory deallocation

    return 0;
}
