#ifdef USE_STDIO
#include <stdio.h>
#else
#include <iostream>
#endif

int main() {
#ifdef USE_STDIO
    printf("Using stdio.h\n");
#else
    std::cout << "Using iostream\n";
#endif
    return 0;
}