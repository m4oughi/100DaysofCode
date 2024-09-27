#include <stdio.h>

#define ERROR_REPORT(msg) printf("Error: %s\nFile: %s\nLine: %d\n", msg, __FILE__, __LINE__)

int main() {
    ERROR_REPORT("Something went wrong");
    return 0;
}
