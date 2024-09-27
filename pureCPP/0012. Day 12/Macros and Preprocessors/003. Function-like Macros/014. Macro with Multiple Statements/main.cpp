#define MULTI_STATEMENT_MACRO(a, b) do { \
    printf("Sum: %d\n", (a) + (b)); \
    printf("Difference: %d\n", (a) - (b)); \
} while(0)

int main() {
    int x = 8, y = 3;
    MULTI_STATEMENT_MACRO(x, y); // Expands to two separate print statements
    return 0;
}
