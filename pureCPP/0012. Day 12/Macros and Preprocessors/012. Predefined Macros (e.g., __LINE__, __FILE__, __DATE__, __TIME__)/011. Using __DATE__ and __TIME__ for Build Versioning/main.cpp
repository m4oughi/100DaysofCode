#include <stdio.h>

void print_build_version() {
    printf("Build Version - Compiled on: %s at %s\n", __DATE__, __TIME__);
}

int main() {
    print_build_version();
    return 0;
}
