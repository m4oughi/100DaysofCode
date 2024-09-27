#define VALUE 10
#define CHECK_DEFINED(x) (#x " is defined.")

int main() {
    const char* message = CHECK_DEFINED(VALUE); // Expands to: "VALUE is defined."
    return 0;
}
