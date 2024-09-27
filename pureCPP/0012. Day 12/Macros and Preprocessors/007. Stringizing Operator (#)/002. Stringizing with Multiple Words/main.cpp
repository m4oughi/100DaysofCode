#define STRINGIFY(x) #x

int main() {
    printf("%s\n", STRINGIFY(This is a macro)); // Output: "This is a macro"
    return 0;
}
