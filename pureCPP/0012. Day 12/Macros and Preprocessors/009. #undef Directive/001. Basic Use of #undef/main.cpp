#include <stdio.h>

#define MAX 100

int main() {
    printf("MAX is: %d\n", MAX);
    #undef MAX
    // printf("MAX is: %d\n", MAX); // This would now cause an error
    return 0;
}
