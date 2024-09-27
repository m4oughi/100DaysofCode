#define DOC_FUNCTION(func) "This is the function: " #func

int sum(int a, int b) { return a + b; }

int main() {
    printf("%s\n", DOC_FUNCTION(sum)); // Output: "This is the function: sum"
    return 0;
}
