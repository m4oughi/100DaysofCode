#define DEBUG_MSG(msg) "DEBUG: " #msg

int main() {
    printf("%s\n", DEBUG_MSG(An error occurred)); // Output: "DEBUG: An error occurred"
    return 0;
}
