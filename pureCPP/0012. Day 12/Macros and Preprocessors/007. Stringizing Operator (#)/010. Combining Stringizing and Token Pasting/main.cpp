#define TO_STRING(x) #x
#define CONCAT_AND_STRINGIZE(a, b) TO_STRING(a##b)

int main() {
    printf("%s\n", CONCAT_AND_STRINGIZE(Hello, World)); // Output: "HelloWorld"
    return 0;
}
