#define DEBUG_MODE 1
#if DEBUG_MODE
#include <stdio.h>
#else
#include <iostream>
#endif

int main() {
#if DEBUG_MODE
    printf("Debug mode active!\n");
#else
    std::cout << "Release mode active!" << std::endl;
#endif
    return 0;
}
