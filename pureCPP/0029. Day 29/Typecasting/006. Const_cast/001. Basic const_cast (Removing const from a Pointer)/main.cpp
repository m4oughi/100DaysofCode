#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int* modifiablePtr = const_cast<int*>(&a);  // Remove const to allow modification
    *modifiablePtr = 20;  // Modify the value (undefined behavior)
    
    cout << "Modified value: " << *modifiablePtr << endl;
    return 0;
}
