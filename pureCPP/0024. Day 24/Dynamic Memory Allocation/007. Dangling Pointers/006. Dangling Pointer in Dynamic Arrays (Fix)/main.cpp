#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3] {1, 2, 3}; // dynamically allocate an array
    delete[] arr; // deallocate the array

    arr = nullptr; // avoid dangling pointer by setting it to nullptr

    if (arr == nullptr) {
        cout << "Pointer is null, safe to use." << endl;
    }

    return 0;
}
