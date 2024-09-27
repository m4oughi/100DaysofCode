#define DEBUG_LEVEL 2

#ifdef DEBUG_LEVEL
    #if DEBUG_LEVEL > 1
        #define DEBUG_PRINT(msg) printf("DEBUG: %s\n", msg)
    #else
        #define DEBUG_PRINT(msg) // Do nothing
    #endif
#else
    #define DEBUG_PRINT(msg) // Do nothing
#endif

int main() {
    DEBUG_PRINT("This is a debug message."); // Only prints if DEBUG_LEVEL > 1
    return 0;
}
