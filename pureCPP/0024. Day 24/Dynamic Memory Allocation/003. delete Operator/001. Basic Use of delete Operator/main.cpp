#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(50); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // deallocate memory
    ptr = nullptr; // avoid dangling pointer by setting to nullptr

    return 0;
}
