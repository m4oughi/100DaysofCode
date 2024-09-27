#include <stdio.h>

#ifdef DEBUG
#line 300 "debug_mode.c"
#else
#line 400 "release_mode.c"
#endif

int main() {
    printf("File: %s, Line: %d\n", __FILE__, __LINE__);
    return 0;
}
