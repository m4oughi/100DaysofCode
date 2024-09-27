#include <stdio.h>

#include "module1.h"
printf("Using %s\n", MODULE_NAME);
#undef MODULE_NAME  // Prevent conflict between module1.h and module2.h
#include "module2.h"
printf("Using %s\n", MODULE_NAME);

int main() {
    return 0;
}
