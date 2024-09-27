#include <stdio.h>
#include "config.h"
#include "debug.h"

int main() {
    DEBUG_LOG("Starting the program...");
    
    #undef DEBUG_MODE  // Disabling debug logging for the rest of the program
    #include "debug.h"  // Re-include debug.h to apply the undef change
    
    DEBUG_LOG("This won't appear now.");  // No output as DEBUG_MODE is undefined
    return 0;
}