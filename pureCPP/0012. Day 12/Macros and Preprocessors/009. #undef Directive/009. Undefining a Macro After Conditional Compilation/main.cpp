#include <stdio.h>

#define USE_STDIO

#ifdef USE_STDIO
#define OUTPUT(x) printf(x)
#else
#define OUTPUT(x) std::cout << x << std::endl
#endif

int main() {
    OUTPUT("Hello, World!\n");
    
    #undef OUTPUT  // Undefining the macro
    
    // OUTPUT("This will not compile");  // Would cause an error
    return 0;
}
