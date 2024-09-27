#define DOUBLE(x) ((x) * 2)
#define SQUARE(x) ((x) * (x))
#define SQUARE_DOUBLE(x) SQUARE(DOUBLE(x))

int main() {
    int num = 3;
    int result = SQUARE_DOUBLE(num); // Expands to: ((3) * 2) * ((3) * 2)
    return 0;
}
