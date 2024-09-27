#include <iostream>
using namespace std;

template <typename T>
void print(T a) {
    cout << "Generic Template: " << a << endl;
}

// Overloading for two parameters
template <typename T1, typename T2>
void print(T1 a, T2 b) {
    cout << "Overloaded Template: " << a << ", " << b << endl;
}

int main() {
    print(5);             // Calls single-argument template
    print(3.14, 42);      // Calls overloaded template with two parameters
    print("Hi", 10);      // Calls overloaded template
    return 0;
}
