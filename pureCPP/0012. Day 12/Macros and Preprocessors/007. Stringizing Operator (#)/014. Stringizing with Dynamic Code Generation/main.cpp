#define FUNC_NAME(x) #x "_function"

int main() {
    printf("Function name: %s\n", FUNC_NAME(my)); // Output: "Function name: my_function"
    return 0;
}
