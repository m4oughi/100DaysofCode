#define CONCAT(a, b) a##b

int main() {
    int xy = 10;
    int result = CONCAT(x, y); // Expands to: xy
    return 0;
}
