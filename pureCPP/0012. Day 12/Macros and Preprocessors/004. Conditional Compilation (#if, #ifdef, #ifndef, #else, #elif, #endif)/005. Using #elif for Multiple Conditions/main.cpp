#include <stdio.h>
#define VERSION 2

#if VERSION == 1
const char* version = "Version 1";
#elif VERSION == 2
const char* version = "Version 2";
#else
const char* version = "Unknown Version";
#endif

int main() {
    printf("Running %s\n", version);
    return 0;
}
