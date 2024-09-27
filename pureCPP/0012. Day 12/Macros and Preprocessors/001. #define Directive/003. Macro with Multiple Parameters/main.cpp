#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    int maxValue = MAX(x, y); // Expands to: ((10) > (20) ? (10) : (20))
    return 0;
}
