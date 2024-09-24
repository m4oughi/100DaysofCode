#include "functions.h"

int main() {
    display(); // Depending on the macro, this could violate ODR
    return 0;
}
