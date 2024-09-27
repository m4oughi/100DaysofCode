#define STRINGIFY(x) #x
#define INFO __FILE__ ":" STRINGIFY(__LINE__)

int main() {
    printf("Error occurred at: %s\n", INFO); // Output: "Error occurred at: filename:7"
    return 0;
}
