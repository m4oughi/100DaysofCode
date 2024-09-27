#define STR_PREFIX(prefix) prefix##_str

const char* hello_str = "Hello, World!";

int main() {
    printf("%s\n", STR_PREFIX(hello)); // Expands to: hello_str
    return 0;
}
