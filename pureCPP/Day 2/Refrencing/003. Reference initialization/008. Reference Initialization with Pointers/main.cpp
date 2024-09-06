#include <iostream>

int main() {
    int x = 40;
    int *ptr = &x;
    int &ref = *ptr;  // ref is a reference to the object pointed by ptr (x)
    ref = 60;         // Changes x to 60

    return 0;
}