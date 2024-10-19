#include <iostream>
using namespace std;

int main() {
    const int value = 42;
    int* nonConstPtr = (int*)&value;  // C-style cast to remove const qualifier
    *nonConstPtr = 100;  // Modifying a const variable (undefined behavior)
    cout << "Value: " << value << endl;  // May not reflect the modification
    return 0;
}
