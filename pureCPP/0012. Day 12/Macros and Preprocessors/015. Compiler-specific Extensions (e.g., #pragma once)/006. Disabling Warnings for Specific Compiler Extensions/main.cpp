#pragma GCC diagnostic ignored "-Wformat"
#include <stdio.h>

int main() {
    printf("%d\n", "string"); // Normally, this generates a warning, but it's ignored here
    return 0;
}
