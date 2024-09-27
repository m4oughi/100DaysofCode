#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Template: " << value << endl;
}

// Overloaded for pointers
template <typename T>
void print(T* value) {
    cout << "Pointer Template: " << *value << endl;
}

int main() {
    int x = 100;
    print(x);        // Calls generic template
    print(&x);       // Calls pointer overload
    return 0;
}
