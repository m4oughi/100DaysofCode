#include <stdio.h>

void init() {
    printf("Program is starting...\n");
}

void cleanup() {
    printf("Program is exiting...\n");
}

#pragma startup init  // Run init() before main()
#pragma exit cleanup   // Run cleanup() after main()

int main() {
    printf("Inside main function\n");
    return 0;
}
