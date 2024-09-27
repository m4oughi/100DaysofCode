#include <iostream>
using namespace std;

template <typename T, int size = 5>
void printArray(T arr[]) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr);  // Uses default size = 5
    return 0;
}
