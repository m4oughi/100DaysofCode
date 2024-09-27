#define CREATE_VAR(prefix, suffix) prefix##suffix

int main() {
    int value123 = 42;
    int result = CREATE_VAR(value, 123); // Expands to: value123
    return 0;
}
