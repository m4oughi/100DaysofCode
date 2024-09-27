#include <stdio.h>

#define DEBUG

int main() {
    #ifdef DEBUG
    printf("Debug mode is enabled\n");
    #endif
    
    #undef DEBUG
    
    #ifdef DEBUG
    printf("This will not be printed as DEBUG is undefined\n");
    #else
    printf("Debug mode is now disabled\n");
    #endif
    return 0;
}
