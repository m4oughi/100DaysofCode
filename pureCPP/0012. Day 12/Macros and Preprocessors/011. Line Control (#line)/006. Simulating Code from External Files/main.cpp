#include <stdio.h>

#line 1 "external_file.h"

void external_function() {
    printf("This function is from file: %s, at line: %d\n", __FILE__, __LINE__);
}

#line __LINE__ "main_file.c"  // Back to the original file

int main() {
    external_function();
    printf("Back to the real file: %s, at line: %d\n", __FILE__, __LINE__);
    return 0;
}
