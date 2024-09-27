#ifdef DEBUG
#define DEBUG_PRINT(message) printf("DEBUG: %s\n", message)
#else
#define DEBUG_PRINT(message) // No-op
#endif

#define FUNCTION_NAME(type) type##_function

void int_function() {
    DEBUG_PRINT("This is an int function.");
}

int main() {
    FUNCTION_NAME(int)(); // Expands to: int_function()
    return 0;
}
