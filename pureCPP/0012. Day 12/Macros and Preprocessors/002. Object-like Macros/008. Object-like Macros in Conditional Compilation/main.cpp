#include <stdio.h>
#define DEBUG 1

int main() {
#if DEBUG
    printf("Debug mode is enabled\n");
#else
    printf("Debug mode is disabled\n");
#endif
    return 0;
}
