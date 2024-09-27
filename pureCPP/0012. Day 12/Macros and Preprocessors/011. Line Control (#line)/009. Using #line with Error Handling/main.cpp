#include <stdio.h>

#line 10 "custom_error_file.c"

void error_function() {
    fprintf(stderr, "Error in file: %s, at line: %d\n", __FILE__, __LINE__);
}

int main() {
    error_function();
    return 0;
}
