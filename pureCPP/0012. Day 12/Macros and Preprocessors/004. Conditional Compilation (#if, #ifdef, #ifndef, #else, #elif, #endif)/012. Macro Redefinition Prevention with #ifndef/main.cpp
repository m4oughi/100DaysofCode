#define VALUE 10

#ifndef VALUE
#define VALUE 20
#else
#define VALUE 30 // Will not be used since VALUE is already defined
#endif

int main() {
    printf("VALUE is %d\n", VALUE); // Prints 10
    return 0;
}
