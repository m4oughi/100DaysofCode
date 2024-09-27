#ifdef DEBUG
#define DEBUG_MSG(msg) printf("DEBUG: %s\n", #msg)
#else
#define DEBUG_MSG(msg) // No-op
#endif

int main() {
    DEBUG_MSG(Some debug message); // Output in debug mode: "DEBUG: Some debug message"
    return 0;
}
