#include <stdio.h>

#define DEBUG_MODE

int main() {
#ifdef DEBUG_MODE
    printf("Debug mode is enabled\n");
#endif
    return 0;
}
