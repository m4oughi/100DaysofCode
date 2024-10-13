#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // null pointer

    // Dereferencing a null pointer is dangerous and causes undefined behavior
    // cout << *ptr << endl; // Uncommenting this will cause a runtime error

    return 0;
}
