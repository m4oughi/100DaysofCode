#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 5, y = 10;
    int maxVal = MAX(x, y); // Expands to: ((5) > (10) ? (5) : (10))
    return 0;
}
