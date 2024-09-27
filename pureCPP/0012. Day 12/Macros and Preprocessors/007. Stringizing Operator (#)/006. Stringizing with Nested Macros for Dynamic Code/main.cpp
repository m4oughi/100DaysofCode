#define STR(x) #x
#define FULL_STR(x) STR(x)

int main() {
    printf("%s\n", FULL_STR(3 + 5)); // Output: "3 + 5"
    return 0;
}
