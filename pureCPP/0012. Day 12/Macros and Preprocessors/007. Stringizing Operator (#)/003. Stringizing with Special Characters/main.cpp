#define MAKE_STRING(x) #x

int main() {
    printf("%s\n", MAKE_STRING(Hello@World!)); // Output: "Hello@World!"
    return 0;
}
