#include <stdio.h>

#define VALUE 10
#define VALUE 20  // Redefining without undef causes warnings or errors

#undef VALUE  // Remove the previous definition

#define VALUE 20  // Now we can safely redefine VALUE

int main() {
    printf("Value is: %d\n", VALUE);
    return 0;
}
