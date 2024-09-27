#include <stdio.h>

int main() {
    printf("File: %s, Line: %d\n", __FILE__, __LINE__);
    printf("Compiled on: %s at %s\n", __DATE__, __TIME__);
    return 0;
}
