#define DOUBLE(x) (x + x)
#define TRIPLE(x) (x + x + x)
#define MULTIPLY_TWO_AND_THREE(a, b) DOUBLE(a) * TRIPLE(b)

int main() {
    int result = MULTIPLY_TWO_AND_THREE(2, 3); // Expands to: (2 + 2) * (3 + 3 + 3)
    return 0;
}
