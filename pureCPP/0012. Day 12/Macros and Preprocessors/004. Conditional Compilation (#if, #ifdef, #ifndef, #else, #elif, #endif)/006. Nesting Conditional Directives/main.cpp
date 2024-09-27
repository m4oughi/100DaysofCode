#include <stdio.h>
#define OS_WINDOWS

#ifdef OS_WINDOWS
    #define PATH_SEPARATOR '\\'
#else
    #ifdef OS_LINUX
        #define PATH_SEPARATOR '/'
    #else
        #define PATH_SEPARATOR '?'
    #endif
#endif

int main() {
    printf("Path separator is: %c\n", PATH_SEPARATOR);
    return 0;
}
