#include <stdio.h>

#define DEBUG_LOG(msg) printf("[DEBUG] %s - File: %s, Line: %d, Date: %s, Time: %s\n", msg, __FILE__, __LINE__, __DATE__, __TIME__)

int main() {
    DEBUG_LOG("Starting the program");
    DEBUG_LOG("Performing an operation");
    DEBUG_LOG("Ending the program");
    return 0;
}
