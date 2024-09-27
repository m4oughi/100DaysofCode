// file1.c
#include <stdio.h>
#line 100 "module1.c"
void module1_function() {
    printf("Module1 - File: %s, Line: %d\n", __FILE__, __LINE__);
}

// file2.c
#line 200 "module2.c"
void module2_function() {
    printf("Module2 - File: %s, Line: %d\n", __FILE__, __LINE__);
}

// main.c
#include <stdio.h>
extern void module1_function();
extern void module2_function();

int main() {
    module1_function();
    module2_function();
    printf("Main file: %s, at line: %d\n", __FILE__, __LINE__);
    return 0;
}
