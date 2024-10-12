#include <iostream>
#include "example.h"
using namespace std;

int main() {
    // Access static member initialized in a separate file
    cout << "Static variable value: " << Example::staticVar << endl;  // Output: 123
    return 0;
}
