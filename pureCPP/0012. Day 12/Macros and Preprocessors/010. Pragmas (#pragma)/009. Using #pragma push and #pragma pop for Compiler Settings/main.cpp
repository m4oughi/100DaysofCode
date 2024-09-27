#include <stdio.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

int main() {
    int unusedVar;  // Compiler will not warn about this unused variable
    
    #pragma GCC diagnostic pop  // Restore previous settings
    return 0;
}
