#include <stdio.h>

#define LOG_ERROR(message) printf("Error: %s\nFile: %s, Line: %d, Compiled on: %s at %s\n", message, __FILE__, __LINE__, __DATE__, __TIME__)

int main() {
    LOG_ERROR("Failed to open file");
    return 0;
}
