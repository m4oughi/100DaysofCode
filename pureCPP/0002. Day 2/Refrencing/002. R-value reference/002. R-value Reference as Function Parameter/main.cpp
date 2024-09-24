#include <iostream>

void setValue(int &&val) {
    val = 30;
}

int main() {
    setValue(20);  // 20 is a temporary, passed by R-value reference

    return 0;
}