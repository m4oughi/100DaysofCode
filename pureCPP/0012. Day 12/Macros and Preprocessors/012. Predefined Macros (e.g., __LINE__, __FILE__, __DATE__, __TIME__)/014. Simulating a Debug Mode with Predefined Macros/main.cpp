#include <stdio.h>

void debug_log(const char* message) {
    printf("[DEBUG] %s - File: %s, Line: %d\n", message, __FILE__, __LINE__);
}

#ifdef DEBUG
#define DEBUG_LOG(msg) debug_log(msg)
#else
#define DEBUG_LOG(msg)
#endif

int main() {
    DEBUG_LOG("Program started");
    printf("Running program...\n");
    DEBUG_LOG("Program ended");
    return 0;
}
