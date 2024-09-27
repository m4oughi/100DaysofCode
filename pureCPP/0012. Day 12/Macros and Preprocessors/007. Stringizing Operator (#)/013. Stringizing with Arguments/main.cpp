#define TO_STRING(x) #x
#define PRINT_ARGS(x, y) printf("Arguments: %s, %s\n", TO_STRING(x), TO_STRING(y))

int main() {
    PRINT_ARGS(10, 20); // Output: "Arguments: 10, 20"
    return 0;
}
