#include <stdio.h>
#define INCLUDE_FILE(file) #file

int main() {
    #include INCLUDE_FILE("myheader.h")
    printf("%s\n", GREETING); // Output from myheader.h
    return 0;
}
