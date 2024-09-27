#define STRINGIFY_EXPR(expr) #expr

int main() {
    printf("%s\n", STRINGIFY_EXPR(3 + 5 * 2)); // Output: "3 + 5 * 2"
    return 0;
}
