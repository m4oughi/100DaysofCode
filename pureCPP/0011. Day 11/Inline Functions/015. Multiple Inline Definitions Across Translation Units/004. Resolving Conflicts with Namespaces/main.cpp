#include <iostream>
#include "functions1.h"
#include "functions2.h"
using namespace std;

int main() {
    Version1::showVersion(); // Output: Version 1 of inline function.
    Version2::showVersion(); // Output: Version 2 of inline function.
    return 0;
}
