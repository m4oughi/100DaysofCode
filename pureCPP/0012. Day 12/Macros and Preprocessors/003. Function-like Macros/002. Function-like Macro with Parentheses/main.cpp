#define SQUARE_SAFE(x) ((x) * (x))

int main() {
    int num = 4;
    int result = SQUARE_SAFE(num); // Expands to: ((4) * (4))
    return 0;
}
