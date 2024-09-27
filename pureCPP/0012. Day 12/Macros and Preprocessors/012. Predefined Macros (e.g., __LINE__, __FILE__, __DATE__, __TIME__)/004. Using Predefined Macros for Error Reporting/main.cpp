#include <stdio.h>

void report_error(const char* message) {
    printf("Error: %s\n", message);
    printf("Occurred in file: %s, on line: %d\n", __FILE__, __LINE__);
}

int main() {
    report_error("Something went wrong!");
    return 0;
}
