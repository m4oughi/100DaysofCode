#define INC(x) (x + 1)
#define RECURSIVE_INC(x) INC(INC(x))

int main() {
    int result = RECURSIVE_INC(3); // Expands to: (3 + 1 + 1)
    return 0;
}
