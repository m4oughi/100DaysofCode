#include <iostream>
using namespace std;

void print(int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print(double arr[], int size) {
    cout << "Double Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3, 4};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
    
    print(intArr, 4);      // Calls print(int[], int)
    print(doubleArr, 4);   // Calls print(double[], int)
    
    return 0;
}
