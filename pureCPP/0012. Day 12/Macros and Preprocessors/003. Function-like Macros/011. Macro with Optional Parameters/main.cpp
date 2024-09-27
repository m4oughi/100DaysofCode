#define LOG(level, message) printf("[" #level "] %s\n", message)

int main() {
    LOG(INFO, "This is an info message"); // Expands to: printf("[INFO] %s\n", "This is an info message")
    LOG(ERROR, "This is an error message"); // Expands to: printf("[ERROR] %s\n", "This is an error message")
    return 0;
}
