#define SWAP(a, b) do { int temp = a; a = b; b = temp; } while (0)

int main() {
    int x = 10, y = 20;
    SWAP(x, y); // Swaps the values of x and y
    return 0;
}
