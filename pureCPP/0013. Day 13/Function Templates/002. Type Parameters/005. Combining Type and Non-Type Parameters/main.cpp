#include <iostream>
using namespace std;

template <typename T, int size>
void fillArray(T (&arr)[size], T value) {
    for (int i = 0; i < size; ++i) {
        arr[i] = value;
    }
}

int main() {
    int intArr[5];
    fillArray(intArr, 10);
    
    double doubleArr[3];
    fillArray(doubleArr, 2.5);

    for (int i : intArr) cout << i << " ";  // Output: 10 10 10 10 10
    cout << endl;
    for (double i : doubleArr) cout << i << " ";  // Output: 2.5 2.5 2.5
    return 0;
}
