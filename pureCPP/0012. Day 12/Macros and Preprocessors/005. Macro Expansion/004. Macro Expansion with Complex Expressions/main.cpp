#define SQUARE_EXPANDED(x) ((x) * (x))

int main() {
    int result = SQUARE_EXPANDED(3 + 2); // Expands to: ((3 + 2) * (3 + 2))
    return 0;
}
