#define ARRAY_NAME(base, index) base##index

int ARRAY_NAME(array, 1)[5] = {1, 2, 3, 4, 5};
int ARRAY_NAME(array, 2)[3] = {10, 20, 30};

int main() {
    printf("%d\n", ARRAY_NAME(array, 1)[2]); // Expands to: array1[2], prints: 3
    printf("%d\n", ARRAY_NAME(array, 2)[1]); // Expands to: array2[1], prints: 20
    return 0;
}
