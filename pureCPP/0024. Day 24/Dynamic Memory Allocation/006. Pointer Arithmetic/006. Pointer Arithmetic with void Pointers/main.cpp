#include <iostream>
using namespace std;

int main() {
    int num = 10;
    void* ptr = &num; // void pointer can point to any data type

    // To perform arithmetic on void pointer, we must cast it to a specific type
    int* intPtr = static_cast<int*>(ptr); // cast void pointer to int pointer
    cout << "Pointer value: " << *intPtr << endl;

    // Cannot do arithmetic directly on void pointers, only after casting
    intPtr++;
    cout << "After increment, pointer points to: " << *intPtr << " (Undefined behavior, example purposes)" << endl;

    return 0;
}
