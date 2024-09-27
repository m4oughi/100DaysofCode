#include <stdio.h>
#define DEBUG_PRINT(x) printf("DEBUG: " #x " = %d\n", x)

int main() {
    int value = 42;
    DEBUG_PRINT(value); // Expands to: printf("DEBUG: " "value" " = %d\n", value)
    return 0;
}
