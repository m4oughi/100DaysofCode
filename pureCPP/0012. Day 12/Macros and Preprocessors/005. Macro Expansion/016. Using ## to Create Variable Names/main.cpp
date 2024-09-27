#define MAKE_VAR(name, id) name##id

int main() {
    int var1 = 100;
    int var2 = 200;
    int result1 = MAKE_VAR(var, 1); // Expands to: var1
    int result2 = MAKE_VAR(var, 2); // Expands to: var2
    return 0;
}
