#define LOG_VAR(var) printf("Variable " #var " has value: %d\n", var)

int main() {
    int x = 10;
    LOG_VAR(x); // Output: "Variable x has value: 10"
    return 0;
}
