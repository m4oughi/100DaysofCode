#define CONCAT(a, b) a##b

int main() {
    int var1 = 10;
    int result = CONCAT(var, 1); // Expands to: var1
    return 0;
}
