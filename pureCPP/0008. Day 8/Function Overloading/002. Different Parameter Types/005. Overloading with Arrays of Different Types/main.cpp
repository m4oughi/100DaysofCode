#include <iostream>
using namespace std;

void display(int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void display(double arr[], int size) {
    cout << "Double Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3};
    double doubleArr[] = {1.1, 2.2, 3.3};
    
    display(intArr, 3);    // Calls display(int[], int)
    display(doubleArr, 3); // Calls display(double[], int)
    
    return 0;
}
