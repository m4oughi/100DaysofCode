#define CREATE_CONSTANT(base, num) const int base##_##num = num;

CREATE_CONSTANT(VALUE, 10); // Expands to: const int VALUE_10 = 10;
CREATE_CONSTANT(VALUE, 20); // Expands to: const int VALUE_20 = 20;

int main() {
    printf("%d, %d\n", VALUE_10, VALUE_20); // Prints: 10, 20
    return 0;
}
