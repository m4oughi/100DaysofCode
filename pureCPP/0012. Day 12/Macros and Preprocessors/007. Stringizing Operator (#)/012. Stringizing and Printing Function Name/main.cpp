#define PRINT_FUNC_NAME(func) #func

void myFunction() {}

int main() {
    printf("Function: %s\n", PRINT_FUNC_NAME(myFunction)); // Output: "Function: myFunction"
    return 0;
}
