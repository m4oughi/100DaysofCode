#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

int main() {
    int unusedVar; // Normally generates a warning, but it's suppressed here
    #pragma GCC diagnostic pop
    return 0;
}
