#define ESCAPE_STRING(x) #x

int main() {
    printf("%s\n", ESCAPE_STRING(This is a "quoted" string)); 
    // Output: "This is a \"quoted\" string"
    return 0;
}
