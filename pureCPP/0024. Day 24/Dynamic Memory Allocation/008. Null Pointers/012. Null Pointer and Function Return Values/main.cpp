#include <iostream>
using namespace std;

int* createNullPointer() {
    return nullptr; // return null pointer
}

int* createValidPointer() {
    return new int(100); // return pointer to dynamically allocated memory
}

int main() {
    int* ptr = createNullPointer(); // get a null pointer from function

    if (ptr == nullptr) {
        cout << "Received a null pointer from the function." << endl;
    }

    ptr = createValidPointer(); // now assign valid memory
    cout << "Valid pointer value: " << *ptr << endl;

    delete ptr; // free memory
    return 0;
}
