#include <iostream>

void increment(int &num) {
    num++;
}

int main () {
    int x = 5;
    increment(x);  // x is modified to 6
    
    return 0;
}