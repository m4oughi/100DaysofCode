#define CHECK_NULL(ptr) do { if ((ptr) == NULL) { printf("Null pointer detected!\n"); return -1; } } while (0)

int main() {
    int *ptr = NULL;
    CHECK_NULL(ptr); // Prints an error message and returns -1 if ptr is NULL
    return 0;
}
