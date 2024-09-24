#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Non-const array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(const int arr[], int size) {
    cout << "Const array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4};
    const int constants[] = {5, 6, 7, 8};

    printArray(numbers, 4);   // Calls non-const version
    printArray(constants, 4); // Calls const version

    return 0;
}
