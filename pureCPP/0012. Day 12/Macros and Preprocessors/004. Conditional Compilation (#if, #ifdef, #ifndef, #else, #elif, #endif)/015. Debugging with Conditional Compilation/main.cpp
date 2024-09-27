#define DEBUG 1

#if DEBUG
#define LOG(message) printf("DEBUG: %s\n", message)
#else
#define LOG(message) // Do nothing
#endif

int main() {
    LOG("Application started."); // Prints the log if DEBUG is defined
    return 0;
}
