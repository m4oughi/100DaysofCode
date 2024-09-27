#include <stdio.h>

int main() {
    #ifdef __STDC__
        printf("The compiler supports ANSI C standard\n");
    #else
        printf("The compiler does not support ANSI C standard\n");
    #endif
    return 0;
}
