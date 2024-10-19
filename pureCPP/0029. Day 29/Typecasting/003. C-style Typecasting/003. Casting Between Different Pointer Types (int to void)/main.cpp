#include <iostream>
using namespace std;

int main() {
    int num = 100;
    int* intPtr = &num;
    void* voidPtr = (void*)intPtr;  // C-style cast from int* to void*
    cout << "Pointer address (void*): " << voidPtr << endl;
    return 0;
}
