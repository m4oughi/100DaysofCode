#define DEBUG 1
#define PRINT_DEBUG(msg) do { \
    if (DEBUG) { \
        printf("DEBUG: %s\n", msg); \
    } \
} while(0)

int main() {
    PRINT_DEBUG("This is a debug message."); // Prints message if DEBUG is defined as 1
    return 0;
}
