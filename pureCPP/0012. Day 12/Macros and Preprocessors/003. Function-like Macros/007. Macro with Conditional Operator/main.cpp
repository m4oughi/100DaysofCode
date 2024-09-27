#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int num = -7;
    int absVal = ABS(num); // Expands to: ((-7) < 0 ? -(-7) : (-7))
    return 0;
}
