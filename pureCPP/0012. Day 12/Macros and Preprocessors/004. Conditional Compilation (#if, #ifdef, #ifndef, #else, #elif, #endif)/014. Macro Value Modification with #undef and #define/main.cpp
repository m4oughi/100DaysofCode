#define MAX_LIMIT 50

#if MAX_LIMIT > 100
#undef MAX_LIMIT
#define MAX_LIMIT 100
#elif MAX_LIMIT < 10
#undef MAX_LIMIT
#define MAX_LIMIT 10
#endif

int main() {
    printf("MAX_LIMIT is %d\n", MAX_LIMIT); // Prints the adjusted value of MAX_LIMIT
    return 0;
}
