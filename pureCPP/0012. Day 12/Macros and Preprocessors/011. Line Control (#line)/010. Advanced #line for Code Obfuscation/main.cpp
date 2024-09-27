#include <stdio.h>

// Obfuscating real file and line number information
#line 9999 "secret_file.c"

void secret_function() {
    printf("This function appears to be from: %s, at line: %d\n", __FILE__, __LINE__);
}

#line 123 "visible_file.c"

int main() {
    secret_function();
    printf("Visible file: %s, at line: %d\n", __FILE__, __LINE__);
    return 0;
}
