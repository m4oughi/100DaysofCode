#include <iostream>
using namespace std;

// Template function
template <typename T>
void print(T a) {
    cout << "Single argument: " << a << endl;
}

// Overloaded template function
template <typename T, typename U>
void print(T a, U b) {
    cout << "Two arguments: " << a << " and " << b << endl;
}

int main() {
    print(10);         // Calls single argument template function
    print(10, 20.5);   // Calls overloaded template function
    
    return 0;
}
