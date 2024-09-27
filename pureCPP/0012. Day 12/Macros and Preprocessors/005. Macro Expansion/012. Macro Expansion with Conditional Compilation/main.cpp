#define DEBUG

#ifdef DEBUG
#define LOG(message) printf("DEBUG: %s\n", message)
#else
#define LOG(message) // Do nothing
#endif

int main() {
    LOG("Debug mode is enabled."); // Expands to: printf("DEBUG: %s\n", "Debug mode is enabled.")
    return 0;
}
