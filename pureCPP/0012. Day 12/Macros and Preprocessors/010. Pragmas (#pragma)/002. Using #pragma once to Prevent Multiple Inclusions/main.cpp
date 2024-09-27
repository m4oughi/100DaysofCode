#include <stdio.h>
#include "file1.h"
#include "file2.h"

int main() {
    printf("VALUE is: %d\n", VALUE);  // No redefinition error due to #pragma once
    return 0;
}