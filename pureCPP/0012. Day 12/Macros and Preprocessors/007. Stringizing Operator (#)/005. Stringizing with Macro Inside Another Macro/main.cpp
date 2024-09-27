#define TO_STRING(x) #x
#define STRINGIFY_AND_EXPAND(x) TO_STRING(x)

int main() {
    int value = 42;
    printf("%s\n", STRINGIFY_AND_EXPAND(value)); // Output: "value"
    return 0;
}
