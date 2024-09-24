#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Single value: " << value << endl;
}

template <typename T, typename U>
void print(T value1, U value2) {
    cout << "Two values: " << value1 << " and " << value2 << endl;
}

int main() {
    print(10);                 // Calls print(T)
    print(10, 3.14);           // Calls print(T, U)
    print("Hello", "World");   // Calls print(T, U)
    
    return 0;
}
