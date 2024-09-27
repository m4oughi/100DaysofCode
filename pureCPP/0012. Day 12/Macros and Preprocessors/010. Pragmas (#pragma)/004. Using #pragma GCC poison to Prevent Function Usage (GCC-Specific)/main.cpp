#include <stdio.h>

#pragma GCC poison printf  // Prevent the use of printf in the code

int main() {
    // printf("This will cause an error");  // This line will cause an error
    return 0;
}
