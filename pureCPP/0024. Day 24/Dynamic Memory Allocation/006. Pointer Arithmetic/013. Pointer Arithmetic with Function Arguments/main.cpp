#include <iostream>
using namespace std;

void processArray(int* arr, int size) {
    cout << "Processing array using pointer arithmetic: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // use pointer arithmetic to access elements
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    processArray(arr, 5); // pass the array to a function

    return 0;
}
