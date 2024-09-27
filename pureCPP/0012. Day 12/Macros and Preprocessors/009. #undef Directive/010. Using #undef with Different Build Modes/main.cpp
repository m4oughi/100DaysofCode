#include <stdio.h>

#define PRODUCTION

#ifdef PRODUCTION
#define LOG(x)  // Disable logging in production
#else
#define LOG(x) printf("LOG: %s\n", x)
#endif

int main() {
    LOG("This is a debug log");  // In production, this will do nothing
    
    #undef PRODUCTION
    #define LOG(x) printf("LOG: %s\n", x)  // Enable logging now
    
    LOG("This is a new log after production mode is disabled");
    return 0;
}
