#define CREATE_VAR_NAME(prefix, suffix) prefix##suffix
#define CONCAT_AND_CREATE(prefix, suffix) CREATE_VAR_NAME(prefix, suffix)

int main() {
    int CONCAT_AND_CREATE(var, 100) = 10; // Expands to: var100
    return 0;
}
