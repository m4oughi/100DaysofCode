#include <iostream>
using namespace std;

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3};
    double arr2[] = {1.1, 2.2, 3.3};

    printArray<int>(arr1, 3);  // Explicitly specifying T as int
    printArray<double>(arr2, 3);  // Explicitly specifying T as double
    return 0;
}
