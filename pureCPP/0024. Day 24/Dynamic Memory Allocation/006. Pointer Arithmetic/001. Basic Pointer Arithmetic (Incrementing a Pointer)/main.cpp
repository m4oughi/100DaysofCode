#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr; // pointer to the first element of the array

    cout << "Pointer points to: " << *ptr << endl;
    
    ptr++; // increment the pointer (moves to the next element)
    cout << "After increment, pointer points to: " << *ptr << endl;

    return 0;
}
