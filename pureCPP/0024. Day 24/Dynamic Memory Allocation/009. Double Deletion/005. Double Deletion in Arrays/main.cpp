#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3]{1, 2, 3}; // dynamically allocate an array

    delete[] arr; // first deletion
    delete[] arr; // second deletion (Error: undefined behavior)

    return 0;
}
