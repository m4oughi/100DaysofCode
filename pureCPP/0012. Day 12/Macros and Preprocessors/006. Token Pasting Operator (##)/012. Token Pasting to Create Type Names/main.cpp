#define TYPE_NAME(base, type) base##_##type

typedef int TYPE_NAME(my, int); // Expands to: my_int
typedef double TYPE_NAME(my, double); // Expands to: my_double

int main() {
    my_int a = 10;
    my_double b = 20.5;
    return 0;
}
