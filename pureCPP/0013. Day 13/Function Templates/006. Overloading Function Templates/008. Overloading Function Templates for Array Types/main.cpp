#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Generic Template: " << value << endl;
}

// Overloading for array types
template <typename T, int size>
void print(T (&array)[size]) {
    cout << "Array Template: ";
    for (int i = 0; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    print(arr);         // Calls array-specific overload
    print(100);         // Calls generic template
    return 0;
}
