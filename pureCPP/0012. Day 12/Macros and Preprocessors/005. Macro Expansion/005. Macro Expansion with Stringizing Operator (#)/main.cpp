#define TO_STRING(x) #x

int main() {
    const char* str = TO_STRING(Hello, World!); // Expands to: "Hello, World!"
    return 0;
}
