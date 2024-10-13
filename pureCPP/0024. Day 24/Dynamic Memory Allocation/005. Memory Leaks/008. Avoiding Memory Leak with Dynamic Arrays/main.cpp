#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* arr = new int[size]; // dynamically allocate an array

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    delete[] arr; // proper memory deallocation for arrays

    return 0;
}
