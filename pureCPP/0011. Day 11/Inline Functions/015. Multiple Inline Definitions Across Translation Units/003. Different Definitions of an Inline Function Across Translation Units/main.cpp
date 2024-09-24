#include <iostream>
#include "functions1.h"
#include "functions2.h"

int main() {
    showVersion(); // Error: Multiple definitions of the same inline function
    return 0;
}
