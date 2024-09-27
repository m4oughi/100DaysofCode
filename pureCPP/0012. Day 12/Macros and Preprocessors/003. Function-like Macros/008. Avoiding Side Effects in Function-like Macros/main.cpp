#define INCREMENT(x) (++x)

int main() {
    int num = 5;
    int result = INCREMENT(num + 1); // Expands to: (++(5 + 1)), leading to unexpected behavior
    return 0;
}
