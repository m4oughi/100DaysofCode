#include <stdio.h>

#define SQUARE(x) (x * x)

int main() {
    int num = 5;
    printf("Square of %d is: %d\n", num, SQUARE(num));
    
    #undef SQUARE
    
    // printf("Square of %d is: %d\n", num, SQUARE(num));  // This would cause an error
    return 0;
}
