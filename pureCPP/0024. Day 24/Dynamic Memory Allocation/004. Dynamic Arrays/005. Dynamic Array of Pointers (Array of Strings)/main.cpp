#include <iostream>
#include <string>
using namespace std;

int main() {
    int size = 3;
    string* arr = new string[size]; // dynamically allocate an array of strings

    arr[0] = "Hello";
    arr[1] = "Dynamic";
    arr[2] = "Array";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr; // deallocate memory
    return 0;
}
