#include <stdio.h>
#define DEBUG_MODE

#ifdef DEBUG_MODE
void debugFunction() {
    printf("Debug mode is enabled.\n");
}
#endif

int main() {
#ifdef DEBUG_MODE
    debugFunction(); // This will only compile if DEBUG_MODE is defined
#endif
    return 0;
}
