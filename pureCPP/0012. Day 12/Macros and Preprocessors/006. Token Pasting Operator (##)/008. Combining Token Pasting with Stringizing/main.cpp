#define COMBINE_AND_STRINGIZE(a, b) #a " + " #b " = " #a##b

int main() {
    printf("%s\n", COMBINE_AND_STRINGIZE(Hello, World)); // Expands to: "Hello + World = HelloWorld"
    return 0;
}
