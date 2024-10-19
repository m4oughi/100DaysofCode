#include <iostream>
using namespace std;

void modify(int* ptr) {
    *ptr = 100;  // Modify the value
}

int main() {
    const int x = 50;
    modify(const_cast<int*>(&x));  // Pass const variable to non-const function (undefined behavior)
    
    cout << "Modified value: " << x << endl;  // May result in undefined behavior
    return 0;
}
