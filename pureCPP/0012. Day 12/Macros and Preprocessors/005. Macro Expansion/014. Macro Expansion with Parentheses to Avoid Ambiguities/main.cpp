#define SAFE_SQUARE(x) ((x) * (x))

int main() {
    int result = SAFE_SQUARE(4 + 1); // Expands to: ((4 + 1) * (4 + 1))
    return 0;
}
