#define FUNCTION_NAME(type) type##_function

void int_function() {
    printf("This is an int function.\n");
}

int main() {
    FUNCTION_NAME(int)(); // Expands to: int_function()
    return 0;
}
