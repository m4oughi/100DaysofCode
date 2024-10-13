#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1]; // points to the second element (20)
    int* ptr2 = &arr[4]; // points to the fifth element (50)

    // Subtracting pointers gives the number of elements between them
    cout << "Difference between ptr2 and ptr1: " << ptr2 - ptr1 << endl;

    return 0;
}
