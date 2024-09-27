#include <stdio.h>

#define TEMP 100

int main() {
#undef TEMP
#ifdef TEMP
    // This code won't execute as TEMP is undefined
#else
    printf("TEMP is not defined\n");
#endif
    return 0;
}
