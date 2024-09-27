#include <stdio.h>

#pragma warning(disable: 4996)  // Disable specific warning (compiler-dependent)

int main() {
    char str[20];
    printf("Enter a string: ");
    gets(str);  // Use of deprecated function
    printf("You entered: %s\n", str);
    return 0;
}
