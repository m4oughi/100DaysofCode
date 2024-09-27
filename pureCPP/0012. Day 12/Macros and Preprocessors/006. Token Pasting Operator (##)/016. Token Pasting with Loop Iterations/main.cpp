#define CONCAT_ID(base, id) base##id

int main() {
    int CONCAT_ID(value, 1) = 1; // Expands to: value1
    int CONCAT_ID(value, 2) = 2; // Expands to: value2
    int CONCAT_ID(value, 3) = 3; // Expands to: value3
    
    printf("%d, %d, %d\n", value1, value2, value3); // Prints: 1, 2, 3
    return 0;
}
