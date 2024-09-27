#include <iostream>
using namespace std;

template <typename T, int size>
T sumArray(T (&arr)[size]) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 2.2, 3.3};

    cout << "Sum of integer array: " << sumArray(arr) << endl;
    cout << "Sum of double array: " << sumArray(arr2) << endl;

    return 0;
}
