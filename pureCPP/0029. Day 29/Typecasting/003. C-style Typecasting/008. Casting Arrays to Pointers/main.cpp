#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = (int*)arr;  // C-style casting an array to a pointer
    cout << "First element via pointer: " << *ptr << endl;
    return 0;
}
