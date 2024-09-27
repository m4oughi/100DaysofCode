#define FOO(x) x + 1
#define BAR(x) FOO(x)
#define FOO_FOO 5

int main() {
    int result = BAR(FOO_FOO); // Expands to: FOO_FOO + 1 (does not expand FOO(5))
    return 0;
}
