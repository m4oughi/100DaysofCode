#define MULTIPLY(a, b) ((a) * (b))
#define DEFAULT_VALUE 2

int main() {
    int result = MULTIPLY(DEFAULT_VALUE, 5); // Expands to: ((2) * (5))
    return 0;
}
