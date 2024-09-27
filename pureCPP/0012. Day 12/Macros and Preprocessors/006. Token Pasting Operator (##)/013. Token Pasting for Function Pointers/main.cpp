#define FUNC_PTR(ret_type, name) ret_type(*name##_ptr)

void hello() {
    printf("Hello, World!\n");
}

int main() {
    FUNC_PTR(void, hello) = hello; // Expands to: void(*hello_ptr)
    hello_ptr(); // Calls the function via the pointer
    return 0;
}
