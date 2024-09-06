#include <iostream>

int& getValue(int &x) {
    return x;
}

int main () {
    int a = 10;
    int &ref = getValue(a);
    ref = 15;  // Changes a to 15
    
    return 0;
}