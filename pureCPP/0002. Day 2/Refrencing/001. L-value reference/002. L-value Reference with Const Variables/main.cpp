#include <iostream>

int main () {
    const int x = 30;
    const int &ref = x;  // ref is a const L-value reference
    // ref = 40;  // Error: cannot modify const reference
    
    return 0;
}