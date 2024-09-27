#define MAKE_STRING(a, b) #a #b
#define PASTE_AND_STRINGIZE(a, b) MAKE_STRING(a, b)

int main() {
    printf("%s\n", PASTE_AND_STRINGIZE(Hello, World)); // Expands to: "HelloWorld"
    return 0;
}
