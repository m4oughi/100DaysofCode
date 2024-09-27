#define TO_STRING_ARGS(...) #__VA_ARGS__

int main() {
    printf("Arguments: %s\n", TO_STRING_ARGS(10, 20, 30)); // Output: "Arguments: 10, 20, 30"
    return 0;
}
