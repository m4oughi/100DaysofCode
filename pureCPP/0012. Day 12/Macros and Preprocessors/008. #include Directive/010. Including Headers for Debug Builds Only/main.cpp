#ifdef DEBUG
#include "debugtools.h"
#endif

int main() {
    #ifdef DEBUG
    debugMessage("Debug mode is enabled!");
    #endif
    return 0;
}
