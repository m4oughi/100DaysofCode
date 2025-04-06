#include <iostream>

int globalVar = 10;  // Non-constexpr variable

constexpr int modifyGlobalVar() {
    // globalVar += 1; ❌ ERROR: Modifying global variables is not allowed.
    return globalVar;
}

int main() {
    constexpr int result = modifyGlobalVar();
    return 0;
}
