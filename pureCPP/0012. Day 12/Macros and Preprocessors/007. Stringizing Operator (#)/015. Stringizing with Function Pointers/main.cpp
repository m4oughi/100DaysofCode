#define FUNC_POINTER_STR(func) "Pointer to function: " #func

void sampleFunction() {}

int main() {
    printf("%s\n", FUNC_POINTER_STR(sampleFunction)); // Output: "Pointer to function: sampleFunction"
    return 0;
}
