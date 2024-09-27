#define PRINT_VAR(var) printf(#var " = %d\n", var)

int main() {
    int value = 42;
    PRINT_VAR(value); // Expands to: printf("value = %d\n", value)
    return 0;
}
