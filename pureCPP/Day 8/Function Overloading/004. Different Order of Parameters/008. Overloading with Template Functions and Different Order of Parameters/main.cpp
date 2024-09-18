#include <iostream>
using namespace std;

template <typename T, typename U>
void display(T a, U b) {
    cout << "Template version: " << a << ", " << b << endl;
}

template <typename U, typename T>
void display(U b, T a) {
    cout << "Swapped Template version: " << b << ", " << a << endl;
}

int main() {
    display(10, 3.5);   // Calls display(T, U)
    display(3.5, 10);   // Calls display(U, T)
    
    return 0;
}
