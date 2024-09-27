#define VAR(i) var_##i

int main() {
    int VAR(1) = 10; // Expands to: var_1
    int VAR(2) = 20; // Expands to: var_2
    printf("%d, %d\n", VAR(1), VAR(2)); // Prints: 10, 20
    return 0;
}
