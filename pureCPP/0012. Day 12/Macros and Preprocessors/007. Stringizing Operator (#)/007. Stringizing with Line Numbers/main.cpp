#define STRINGIFY_LINE(x) #x
#define LINE_NUMBER STRINGIFY_LINE(__LINE__)

int main() {
    printf("This is line: %s\n", LINE_NUMBER); // Output: "This is line: 7"
    return 0;
}
