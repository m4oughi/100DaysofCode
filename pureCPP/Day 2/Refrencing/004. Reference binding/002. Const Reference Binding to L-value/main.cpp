#include <iostream>

int main() {
    int x = 30;
    const int &ref = x;  // ref binds to x as a const reference
    // ref = 40;  // Error: Cannot modify through const reference

    return 0;
}