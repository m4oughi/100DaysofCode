#define SAFE_INCREMENT(x) ((x) + 1)

int main() {
    int a = 5;
    int b = SAFE_INCREMENT(a++); // Expands to: ((a++) + 1)
    return 0;
}
