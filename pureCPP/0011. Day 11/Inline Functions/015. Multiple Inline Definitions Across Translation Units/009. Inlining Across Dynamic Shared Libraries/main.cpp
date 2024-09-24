#include "shared_functions.h"

int main() {
    sharedFunction(); // May cause issues with inlining across DSOs
    return 0;
}
