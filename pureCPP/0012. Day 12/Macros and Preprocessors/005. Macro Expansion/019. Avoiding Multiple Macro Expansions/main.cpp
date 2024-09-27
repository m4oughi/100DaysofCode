#define ADD_ONE(x) x + 1
#define ADD_TWO(x) ADD_ONE(ADD_ONE(x))

int main() {
    int result = ADD_TWO(3); // Expands to: (3 + 1) + 1 (avoiding double expansion)
    return 0;
}
