#define USE_HEADER_A

#ifdef USE_HEADER_A
#include "headerA.h"
#else
#include "headerB.h"
#endif

int main() {
    // Use functions from either headerA.h or headerB.h based on USE_HEADER_A
    return 0;
}
