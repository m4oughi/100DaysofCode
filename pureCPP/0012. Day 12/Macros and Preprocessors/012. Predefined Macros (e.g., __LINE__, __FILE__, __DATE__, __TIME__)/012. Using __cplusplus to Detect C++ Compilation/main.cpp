#include <stdio.h>

int main() {
    #ifdef __cplusplus
        printf("This code is compiled in C++\n");
    #else
        printf("This code is compiled in C\n");
    #endif
    return 0;
}
