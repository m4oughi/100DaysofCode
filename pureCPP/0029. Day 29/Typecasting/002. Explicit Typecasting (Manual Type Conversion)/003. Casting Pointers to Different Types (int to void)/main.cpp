#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    void* vp = (void*)p;  // Explicit cast from int* to void*
    cout << "Pointer address: " << vp << endl;
    return 0;
}
