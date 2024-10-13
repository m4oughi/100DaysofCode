#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(25); // dynamically allocate memory and initialize
    cout << "Initialized Value: " << *ptr << endl; // output initialized value

    delete ptr; // deallocate memory
    return 0;
}
