#include <stdio.h>

#define PI 3.14

int main() {
    printf("Value of PI: %f\n", PI);
    
    #undef PI
    #define PI 3.14159  // Redefining PI
    
    printf("Redefined value of PI: %f\n", PI);
    return 0;
}
