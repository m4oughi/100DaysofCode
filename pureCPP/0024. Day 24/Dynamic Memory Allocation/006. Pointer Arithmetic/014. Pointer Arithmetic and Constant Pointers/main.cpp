#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20};
    int* const ptr = arr; // constant pointer, cannot change the address it holds

    cout << "Constant pointer value: " << *ptr << endl;

    ptr++; // Error: pointer is constant, cannot be incremented (comment out to compile)

    return 0;
}
