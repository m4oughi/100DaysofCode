#include <stdio.h>
#define DEBUG_PRINT(var) printf("DEBUG: " #var " = %d\n", var)

int main() {
    int value = 42;
    DEBUG_PRINT(value); // Expands to: printf("DEBUG: " "value" " = %d\n", value)
    return 0;
}
