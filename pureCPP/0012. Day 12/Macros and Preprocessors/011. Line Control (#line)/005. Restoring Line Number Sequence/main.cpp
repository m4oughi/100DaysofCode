#include <stdio.h>

#line 150  // Set line number to 150

int main() {
    printf("Before restoring: Line %d, File %s\n", __LINE__, __FILE__);
    
    #line __LINE__  // Restore the original line number

    printf("After restoring: Line %d, File %s\n", __LINE__, __FILE__);
    return 0;
}
