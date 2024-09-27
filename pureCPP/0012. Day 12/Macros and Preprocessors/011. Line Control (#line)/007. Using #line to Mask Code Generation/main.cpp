#include <stdio.h>

// Simulate generated code with custom line numbers and filenames
#line 10 "generated_code.c"
void generated_function() {
    printf("This function appears to be from: %s, at line: %d\n", __FILE__, __LINE__);
}

#line 100 "real_code.c"  // Restore to real code context

int main() {
    generated_function();
    printf("Real code from: %s, at line: %d\n", __FILE__, __LINE__);
    return 0;
}
